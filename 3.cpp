#include <iostream>
#include <clocale>

int main()
{
	setlocale(LC_CTYPE, "rus");

	int a;
	std::cout << "Введите число: ";
	std::cin >> a;

	if(a % 2 == 0)
	{
		std::cout << "\nЧисло четное";
	}
	else
	{
		std::cout << "\nЧисло нечетное";
	}
}