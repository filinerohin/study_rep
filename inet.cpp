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
	vector<int> sums(0,0);

	for (int i = 0; i < rooms.size(); i++) 			//считает все комнаты 
	{ 
		for (int j = 0; j < internet.size(); j++) 	//считает комнаты где нужен интернет
		{
	cout << "If gateway number is ";
	cout << rooms[i] << " so the way to room " << internet[j] << " will count " << abs(rooms[i] - internet[j]) << endl;
	provod.push_back(abs(rooms[i] - internet[j]));		//эта ступень цикла выполняется для каждого значения i j количество раз
		}	
	sum = accumulate(begin(provod), end(provod), 0);
	cout << "The sum of wire needed: " << sum << endl;
	sums.push_back(sum);
	provod.clear();						//вектор сбрасывается чтобы выводимые значения не суммировались
	}
auto it = min_element(sums.begin(), sums.end());
*it = minValue;
for (int i = 0; i < rooms.size(); i++) 		//значение для номера комнаты
{
	if (sums[i] == minValue) 		//если порядковая позиция минимального числа совпадает с комнатой
		{
		cout << "The best point for gateway is: " << rooms[i] << endl;
		}	
}
return 0;
}
