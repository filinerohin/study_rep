#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cctype>
using namespace std;

int main() 
{
	cout << "Type the sentence: ";
	string sentence;
	getline (cin, sentence);
	vector<int> indexes;
	vector<int> nums;
for (size_t i = 0; i < sentence.length(); ++i)
    {
	if (isdigit(static_cast<unsigned char>(sentence[i])))
	{
		indexes.push_back(i);
		nums.push_back(sentence[i]);

		cout << "Digit found: " << sentence[i] << " || " << "Digit index: " << nums.size() << endl;
	}
    }

int diap1 = 0;
int diap2 = 0;

cout << " " << endl;
cout << "\t" << "Select a digit position: " << "\n";
	cout << "First: ";
	cin >> diap1;
	if (diap1 <= 0)
	{
		cout << "Error. This value can't be zero or less. Try again." << endl;
		return 0;
	}
	cout << "Second: ";
	cin >> diap2;
	if (diap2 <= 0)
	{
		cout << "Error. This value can't be zero or less. Try again." << endl;
		return 0;
	}

vector<int> diapazon;
int diap_nums = 0;
for (int i = diap_nums; i < diap2; i++)
{
	diapazon.push_back(i);
	int j = diapazon[i];
	int k = indexes[j];
	if (k >= diap1 - 1)
	{
	cout << sentence[k] << endl;
	}
}
return 0;
}
