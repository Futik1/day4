#include <iostream>
#include <cmath>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	double T, X;
	std::cout << "Введите T  - ";
	std::cin >> T;
	std::cout << "Введите X  - ";
	std::cin >> X;
	long double  b = (X * X + T + T);
	long double  corenb = sqrt(b);
	long double  a = log(X);
	long double  coreny = sqrt(a - b * X);
	long double  y = (coreny * coreny * coreny * coreny * coreny);
	std::cout << "Y - " << y << std::endl;
	std::cout << "A  - " << a << std::endl;
	std::cout << "B  - " << corenb << std::endl;
}