#include <iostream>
#include <clocale>

int main()
{
	setlocale(LC_CTYPE, "rus");

	int a;
	std::cout << "Сколько очков опыта получил герой? ";
	std::cin >> a;
	std::cout << "\nУровень ";

	if(a >= 1000 && a < 2500)
	{
		std::cout << "1";
	}
	else if(a >= 2500 && a < 5000)
	{
		std::cout << "2";
	}
	else if (a >= 5000)
	{
		std::cout << "3";
	}
	else
	{
		std::cout << "0";
	}
}