#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_CTYPE, "rus");

    int sal1, sal2, sal3, min, max;
    std::cout << "Введите зарплату первого сотрудника: ";
    std::cin >> sal1;
    std::cout << "\nВведите зарплату второго сотрудника: ";
    std::cin >> sal2;
    std::cout << "\nВведите зарплату третьего сотрудника: ";
    std::cin >> sal3;

    std::cout << "Средняя зарплата отдела: " << (sal1 + sal2 + sal3) / 3 << std::endl;

    if (sal1 >= sal2 && sal1 >= sal3)
    {
        max = sal1;
    }
    else if (sal2 >= sal1 && sal2 >= sal3)
    {
        max = sal2;
    }
    else if (sal3 >= sal1 && sal3 >= sal2)
    {
        max = sal3;
    }


    if (sal1 <= sal2 && sal1 <= sal3)
    {
        min = sal1;
    }
    else if (sal2 <= sal1 && sal2 <= sal3)
    {
        min = sal2;
    }
    else if (sal3 <= sal1 && sal3 <= sal2)
    {
        min = sal3;
    }

    if (min == max)
    {
        std::cout << "Зарплаты сотрудников равны.";
    }
    else
    {
        std::cout << "Разность между самой высокой и самой низкой зарплатой составляет " << max - min << " рублей";
    }
}
