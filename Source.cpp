//Вариант 3 Голуб Антон
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");

	int a;
	double h, S;
	cin >> a;
	cin >> h;
	S = (a * h) * 0.5;
	cout << "S=" << S << endl;
	return 0;
}