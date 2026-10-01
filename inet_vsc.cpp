#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
using namespace std;

int main () 
{
	int diap1 = 0;
	int diap2 = 0;
	int inet = 0;
	int sum = 0;
cout << "Enter number of rooms in diapasone: " << endl;
	cout << "First: ";
	cin >> diap1;
	cout << "Second: ";
	cin >> diap2;
	cout << "Enter rooms that need internet: ";
	cin >> inet;

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
	for (int i = 0; i < diap2; i++) 
	{ 
		for (int j = 0; j < internet.size(); j++)
	    {
	cout << "If gateway number is ";
	cout << rooms[i] << " so the way to room " << internet[j] << " will count " << abs(rooms[i] - internet[j]) << endl;
	provod.push_back(abs(rooms[i] - internet[j]));
        }
	sum = accumulate(begin(provod), end(provod), 0);
	cout << "The sum of wire needed: " << sum << endl;
	}
return 0;
}