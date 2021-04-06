#include <sstream>
#include <fstream>
#include "SearchWords_class.h"


map <string, Search_words> func(istream& stream, vector<string>& strings);

int main()
{
	string path = "Text.txt";
	ifstream in(path);
	Search_words myclass;
	myclass.add("Internet");
	myclass.add("Money");
	myclass.add("history");
	vector<string> search_words = myclass.GetVector();
	map <string, Search_words> result = func(in, search_words);
	myclass.PrintMap(result);
	system("pause");
	return 0;
}


map <string, Search_words> func(istream& stream, vector<string>& strings) {
	string line;
	map <string, Search_words> result;
	vector <string>res_strings;
	string word;
	string sentence;
	int count = 0;
	bool control_of_result = false;
	bool control_of_line = true;
	for (auto it : strings) {
		stream.seekg(0, stream.beg);
		while (getline(stream, line)) {
			for (int i = 0; i < line.size(); i++) {
				if (line[i] == '.' || line[i] == '!' || line[i] == '?') {
					control_of_line = false;
				}
				if (control_of_line == true) {
					sentence += line[i];
				}
				if (control_of_line == false) {
					istringstream stream(sentence);
					while (stream >> word) {
						if (it == word) {
							control_of_result = true;
							count++;
						}
					}

					if (control_of_result == true) {
						sentence = sentence + line[i];
						res_strings.push_back(sentence);
						control_of_result = false;
					}
					control_of_line = true;
					sentence.clear();
				}
			}
		}
		result[it] = Search_words(count, res_strings);
		res_strings.clear();
		count = 0;
		stream.clear();
	}
	return result;
}

