#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	setlocale(LC_ALL, "ru-RU");

	double w;
	double y;
	double G = 0;

	cout << "Задайте w = ";
	cin >> w;
	cout << "Задайте y = ";
	cin >> y;

	G = (9.33 * pow(w, 3) + sqrt(w)) / (log(y + 3.5) + sqrt(y));

	cout << "ответ = " << G << endl;
	system("pause");
	return 0;
}