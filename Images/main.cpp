#define MODE 1

#ifdef MODE

#if MODE == 1
int add(int a, int b)
{
	return a + b;
}
#endif

#include <iostream>



int main()
{
#if MODE == 0
    std::cout << "Работаю в режиме тренировки\n";
#elif MODE == 1
    std::cout << "Работаю в боевом режиме\n";
	int a, b;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Результат сложения: " << add(a, b) << std::endl;
#else
	cout << "Неизвестный режим. Завершение работы\n";
#endif
	return 0;
}

#else
#endif
