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
	int number;
	getline (cin, sentence);
	vector<int> nums;
	vector<int> chars; 
	stringstream ss (sentence);
	
	while (ss >> number) 
	{
		nums.push_back(number);
		chars.push_back(nums.size());
	}
	for (int i = 0; i < nums.size(); i++) 
	{
		cout << nums[i] << " (" << chars[i] << ")" << endl;
	}

return 0;
}
