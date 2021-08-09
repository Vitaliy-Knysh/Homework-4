#include <iostream>
#include <clocale>

int main() 
{
    setlocale(LC_CTYPE, "rus");
    int day;
    std::cout << "--------МЕНЮ БИЗНЕС-ЛАНЧА--------\n\n";
    start:
    std::cout << "Какой сегодня день недели? ";
    std::cin >> day;
    switch (day)
    {
    case 1:
        std::cout << "Особое блюдо для понедельника + ";
        break;
    case 2:
        std::cout << "Особое блюдо для вторника + ";
        break;
    case 3:
        std::cout << "Особое блюдо для среды + ";
        break;
    case 4:
        std::cout << "Особое блюдо для четверга + ";
        break;
    case 5:
        std::cout << "Особое блюдо для пятницы + ";
        break;
    case 6:
        std::cout << "Особое блюдо для субботы + ";
        break;
    case 7:
        std::cout << "Особое блюдо для воскресенья + ";
        break;
    default:
        std::cout << "ОШИБКА! ВВЕДИТЕ ПРАВИЛЬНЫЙ ДЕНЬ НЕДЕЛИ!\n\n";
        goto start;
        break;
    }
    std::cout << " общая часть меню";
}
