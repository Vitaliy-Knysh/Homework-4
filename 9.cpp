#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_CTYPE, "rus");
    int money;
    std::cout << "Введите свой доход: ";
    std::cin >> money;

    if (money > 50000)
    {
        std::cout << "\nВам нужно заплатить " << (money - 50000) * 0.3 + 40000 * 0.2 + 10000 * 0.13;
    }
    else if (money > 10000)
    {
        std::cout << "\nВам нужно заплатить " << (money - 10000) * 0.2 + 10000 * 0.13;
    }
    else
    {
        std::cout << "\nВам нужно заплатить " << money * 0.13;
    }
}
