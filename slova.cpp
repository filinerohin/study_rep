#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int main() 
{
	cout << "Type the sentence: ";
	string sentence;
	getline (cin, sentence);
	vector<string> words;
	vector<int> chars;

	stringstream ss (sentence);
	string word;
	while (ss >> word) 
	{
		words.push_back(word);
		chars.push_back(word.size());
	}
	for (int i = 0; i < words.size(); i++) 
	{
		cout << words[i] << " (" << chars[i] << ")" << endl;
	}
	
	int minValue = 0;
	
	auto one = min_element(chars.begin(), chars.end());
	minValue = *one;

	cout << "" << endl;
	cout << "Smallest word(s); " << endl;
	bool first1 = true;
	for (size_t i = 0; i < chars.size(); i++)
	{
		if (chars[i] == minValue)
		{
			if (!first1)
			{
				cout << ", ";
			}
		cout << words[i] << " (" << chars[i] << ")";
		first1 = false;
		}
	}

	int maxValue = 0;
	
	auto two = max_element(chars.begin(), chars.end());
	maxValue = *two;

	cout << "" << endl;
	cout << "Biggest word(s); " << endl;
	bool first2 = true;
	for (size_t i = 0; i < chars.size(); i++)
	{
		if (chars[i] == maxValue)
		{
			if (!first2)
			{
				cout << ", ";
			}
		cout << words[i] << " (" << chars[i] << ")";
		first2 = false;
		}
	}
return 0;
}
