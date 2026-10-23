#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
#include <algorithm>
using namespace std;

int main () 
{
	int diap1 = 0;
	int diap2 = 0;
	int inet = 0;
	int sum = 0;
	int minValue = 0;

cout << "Enter number of rooms in diapasone" << endl;
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
	cout << "Enter rooms that need internet: ";
	cin >> inet;
	if (inet <= 0)
	{
		cout << "Error. This value can't be zero or less. Try again." << endl;
		return 0;
	}

	vector<int> rooms(0,0);
	for (int i = diap1; i <= diap2; i++) 
{
	rooms.push_back(i);	
}

	vector<int> internet(0,0);
	while (inet > 0) 
{
	internet.push_back(inet);
		cin >> inet;
}
	cout << "All rooms: " << rooms.size() << endl;
	cout << "Room numbers: ";
	for (int i = 0; i < rooms.size(); i++)
{
		cout << rooms[i] << " ";
}
	cout << endl;
	cout << "Rooms that need internet: ";
	for (int i = 0; i < internet.size(); i++)
{
		cout << internet[i] << " ";
}
		cout << endl; 

	vector<int> provod(0,0);
	vector<int> sums(0,0);

	for (int i = 0; i < rooms.size(); i++) 
	{
		for (int j = 0; j < internet.size(); j++)
		{
	cout << "If gateway number is ";
	cout << rooms[i] << " so the way to room " << internet[j] << " will count " << abs(rooms[i] - internet[j]) << endl;
	provod.push_back(abs(rooms[i] - internet[j]));
		}	
	sum = accumulate(begin(provod), end(provod), 0);
	cout << "The sum of wire needed: " << sum << endl;
	sums.push_back(sum);
	provod.clear();	
	}
	
auto it = min_element(sums.begin(), sums.end());
minValue = *it;

cout << "The best point(s) for gateway: ";

bool first = true;
for (size_t i = 0; i < rooms.size(); i++)
{
    if (sums[i] == minValue)
    {
        if (!first)
        {
            cout << ", ";
        }
        cout << rooms[i];
        first = false;
    }
}
cout << endl;
return 0;
}
