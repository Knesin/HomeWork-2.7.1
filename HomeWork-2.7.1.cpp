#include <iostream>

#define MODE 1
#ifndef MODE
#error Need define MODE
#else

#if MODE == 1
int add(const int& i, const int& j) { return i + j; }
#endif

int main()
{ 
    setlocale(LC_ALL, "Russian");
#if MODE == 0
    std::cout << "Работаю в режиме тренировки" << std::endl;
#elif MODE == 1
    std::cout << "Работаю в боевом режиме" << std::endl;
    std::cout << "Введите число 1: ";
    int a;
    std::cin >> a;
    std::cout << "Введите число 2: ";
    int b;
    std::cin >> b;
    std::cout << "Результат сложения: " << add(a, b) << std::endl;

#else
    std::cout << "Неизвестный режим. Завершение работы" <<std::endl;
#endif
}

#endif