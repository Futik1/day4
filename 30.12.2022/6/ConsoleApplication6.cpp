#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	setlocale(LC_ALL, "ru-RU");

	double x;	
	double A = 0;

	cout << "Задайте x = ";
	cin >> x;

	A = sin(x)  - (sin(2 * x) / 2) + (sin(3 * x) / 3) - (sin(4 * x) / 4) + (sin(5 * x) / 5) - (sin(6 * x) / 6);
	
	cout << "ответ = " << A << endl;
	system("pause");
	return 0;
}