#pragma once
#include <string>
#include <vector>
#include <map>
using namespace std;

class Search_words {
public:
	Search_words();

	Search_words(int count, vector<string>result);

	void add(string str);

	int GetCount()const;

	vector<string> GetVector()const;

	vector<string> GetResultVector()const;

	void PrintMap(const map<string, Search_words>& result);

private:
	int count;
	vector<string>search_strings;
	vector<string>result_vec;
};

