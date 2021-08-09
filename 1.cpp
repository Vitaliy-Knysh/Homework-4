#include <iostream>
#include <clocale>

int main()
{
	setlocale(LC_CTYPE, "rus");

	int a, b;
	std::cout << "Введите первое число: ";
	std::cin >> a;
	std::cout << "\nВведите второе число: ";
	std::cin >> b;
	if (a < b)
	{
		std::cout << "\nНаименьшее число: " << a;
	}
	else if (a > b)
	{
		std::cout << "\nНаименьшее число: " << b;
	}
	else
	{
		std::cout << "\nЧисла равны";
	}
}