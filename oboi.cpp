#include <iostream>
#include <cmath>
using namespace std;

int main() {

cout << " " << endl;

double dl_a = 0;
double sh_b = 0;
double vy_c = 0;
double dl_rulon = 0;
double sh_rulon = 0;

	cout << "inter dl: ";
	cin >> dl_a;
	if (dl_a <= 0)
	{
	cout << "Error. This value can't be zero or less." << endl;
	return 0;
	}

	cout << "inter sh: ";
	cin >> sh_b;
	if (sh_b <= 0)
	{
	cout << "Error. This value can't be zero or less." << endl;
	return 0;
	}

	cout << "inter vy: ";
	cin >> vy_c;
	if (vy_c <= 0)
	{
	cout << "Error. This value can't be zero or less." << endl;
	return 0;
	}

	cout << "inter dl_rulon: ";
	cin >> dl_rulon;
	if (dl_rulon <= 0)
	{
	cout << "Error. This value can't be zero or less." << endl;
	return 0;
	}

	cout << "inter sh_rulon: ";
	cin >> sh_rulon;
	if (sh_rulon <= 0)
	{
	cout << "Error. This value can't be zero or less." << endl;
	return 0;
	}

cout << " " << endl;

// Рассчёт периметра комнаты и площадей
double perimetr = (dl_a + sh_b) * 2;
double ploshad_sten = perimetr * vy_c;
double pl_rulona = dl_rulon * sh_rulon;
double ploshad_oboev = dl_rulon * perimetr;

// Рассчёт количества рулонов

int i = 0;
for (int j = 0; j < 10; j++)
	if (j == trunc(dl_rulon / vy_c))
{
	i = j;
}

double nado_rulonov = (ploshad_oboev / pl_rulona) / i;
double ostatok = (nado_rulonov * pl_rulona) - ploshad_sten;
double odin_proc = (trunc(nado_rulonov) * pl_rulona) / 100;
double ostatok_proc = trunc(ostatok / odin_proc);

	if (nado_rulonov != trunc(nado_rulonov))
	{
	ostatok = (trunc(nado_rulonov + 1) * pl_rulona) - ploshad_sten;
	odin_proc = (trunc(nado_rulonov + 1) * pl_rulona) / 100;
	ostatok_proc = trunc(ostatok / odin_proc);
	}


//Логи
cout << "perimetr = " << perimetr << endl;
cout << "ploshad_sten = " << ploshad_sten << endl;
cout << "pl_rulona = " << pl_rulona << endl;
cout << "ploshad_oboev = " << ploshad_oboev << endl;

cout << " " << endl;

		cout << "nado = " << trunc(nado_rulonov) + 1 << endl;
		cout << "procent% = " << ostatok_proc << endl;
		cout << " " << endl;

return 0;
}
