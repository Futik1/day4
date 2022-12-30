#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	setlocale(LC_ALL, "ru-RU");

	float a;
	float t;
	double D = 0;

	cout << "Задайте a = ";
	cin >> a;
	cout << "Задайте t = ";
	cin >> t;

	D = 9.8 * pow(a, 2) + 5.52 * cos(pow(t, 5));

	cout << "ответ = " << D << endl;
	system("pause");
	return 0;
}