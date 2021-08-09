#include <iostream>
#include <clocale>

int main()
{
	setlocale(LC_CTYPE, "rus");

	int a, b, c;
	std::cout << "Введите первое число: ";
	std::cin >> a;
	std::cout << "\nВведите второе число: ";
	std::cin >> b;
	std::cout << "\nСложите числа в уме и введите ответ: ";
	std::cin >> c;
	if (a + b != c)
	{
		std::cout << "\nНеверно!";
	}
	else
	{
		std::cout << "\nВерно!";
	}
}