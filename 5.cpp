#include <iostream>
#include <clocale>

int main()
{
	setlocale(LC_CTYPE, "rus");

	int a, b;
	std::cout << "Введите делимое: ";
	std::cin >> a;
	std::cout << "Введите делитель: ";
	std::cin >> b;

	if (a % b == 0)
	{
		std::cout << a << " делится на " << b << " без остатка";
	}
	else
	{
		std::cout << a << " делится на " << b << " с остатком, равным " << a % b;
	}
}