#include "SearchWords_class.h"
#include <iostream>

Search_words::Search_words() {
	count = 0;
	vector<string>result(0);
	vector<string>strings(0);
}

Search_words::Search_words(int count, vector<string>result) {
	this->count = count;
	this->result_vec = result;

}

void Search_words::add(string str) {
	search_strings.push_back(str);
}

int Search_words::GetCount()const {
	return count;
}

vector<string> Search_words::GetVector()const {
	return search_strings;
}

vector<string> Search_words::GetResultVector()const {
	return result_vec;
}

void Search_words::PrintMap(const map<string, Search_words>& result) {
	for (auto i : result) {

		cout << "Word: " << i.first << "\nQuantity in file: " << i.second.GetCount() << endl;
		if (i.second.GetCount() == 0) {
			cout << "The word doesn't exist in the file.\n";
			cout << endl << endl;
		}
		else {
			cout << "The sentences that contain the word " << i.first << ":\n";
			for (auto j : i.second.GetResultVector()) {
				cout << j;
			}
			cout << endl << endl;
		}

	}
}