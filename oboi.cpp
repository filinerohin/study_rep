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
	cout << "inter sh: ";
	cin >> sh_b;
	cout << "inter vy: ";
	cin >> vy_c;
	cout << "inter dl_rulon: ";
	cin >> dl_rulon;
	cout << "inter sh_rulon: ";
	cin >> sh_rulon;

cout << " " << endl;

// Рассчёт периметра комнаты и площадей
double perimetr = (dl_a + sh_b) * 2;
double ploshad_sten = perimetr * vy_c;
double pl_rulona = dl_rulon * sh_rulon;
double ploshad_oboev = dl_rulon * perimetr;

// Рассчёт количества рулонов
// Если число с плавающей точкой
double nado_rulonov1 = (ploshad_oboev / pl_rulona) / 2;
// Если число без плавающей точки
double nado_rulonov2 = trunc(nado_rulonov1);

// Pасчёт остатка
// При условии если число без плавающей точки
double ostatok = (nado_rulonov1 * pl_rulona) - ploshad_sten;
double odin_proc = (nado_rulonov2 * pl_rulona) / 100;
double ostatok_proc = trunc(ostatok / odin_proc);
// При условии если число с плавающей точкий
double ostatok1 = ((nado_rulonov2 + 1) * pl_rulona) - ploshad_sten;
double odin_proc1 = ((nado_rulonov2 + 1) * pl_rulona) / 100;
double ostatok_proc1 = trunc(ostatok1 / odin_proc1);

//Логи
cout << "perimetr = " << perimetr << endl;
cout << "ploshad_sten = " << ploshad_sten << endl;
cout << "pl_rulona = " << pl_rulona << endl;
cout << "ploshad_oboev = " << ploshad_oboev << endl;

cout << " " << endl;

	if (nado_rulonov1 > nado_rulonov2) {
		cout << "nado = " << nado_rulonov2 + 1 << endl;
		cout << "procent% = " << ostatok_proc1 << endl;
		cout << " " << endl;
	return 0;
	}
	else if (nado_rulonov1 = nado_rulonov2) {
		cout << "nado = " << nado_rulonov2 << endl;
		cout << "procent% = " << ostatok_proc << endl;
		cout << " " << endl;
	return 0;
	}
return 0;
}
