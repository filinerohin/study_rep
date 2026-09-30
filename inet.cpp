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
	int shluz = 0;
	cout << "Введите диапазон нужных комнат" << endl;
	cout << "От: ";
	cin >> diap1;
	cout << "До: ";
	cin >> diap2;
	cout << "В какие комнаты надо провести интернет?: ";
	cin >> inet;

	//Сначала надо создать вектор со всеми возможными в рамках значений комнатами
	vector<int> rooms(0,0);
	for (int i = diap1; i <= diap2; i++) 
{
	rooms.push_back(i);	
}

	//Теперь ввод комнат для шлюза
	vector<int> internet(0,0);
	while (inet > 0) 
{
	internet.push_back(inet);
		cin >> inet;
}
	cout << "Сколько комнат: " << rooms.size() << endl;
	cout << "Какие номера: ";
	for (int i = 0; i < rooms.size(); i++)
{
		cout << rooms[i] << " ";
}
	cout << endl;
	cout << "Куда надо прoвести интернет: ";
	for (int i = 0; i < internet.size(); i++)
{
		cout << internet[i] << " ";
}
		cout << endl; 

	cout << "Введите комнату для шлюза: ";
	vector<int> provod(0,0);
	cin >> shluz;
	if (shluz <= diap2) 
{
	for (int i = 0; i < internet.size(); i++)
	{
	cout << " Если шлюз в комнате ";
	cout << shluz << " то расстояние до " << internet[i] << " комнаты равно " << abs(shluz - internet[i]) << endl;
	provod.push_back((abs(shluz - internet[i])));
	}
	int sum = accumulate(begin(provod), end(provod), 0);
	cout << "Проводов необходимо: " << sum << endl;
}
return 0;
}

