#include <iostream>
#include <Windows.h>

enum class Months 
{Jan = 1, Feb, March, Apr, May, June, July, Aug, Sept, Octeb, Nov, Dec};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int user_month;

	do {
		std::cout << "Введите номер месяца: ";
		std::cin >> user_month;

		if (user_month < 0 || user_month > 12) {
			std::cout << "Неккоректное значение."<<std::endl;
			continue;
		}

		Months month{ static_cast<Months>(user_month) };

		switch (month) {
		case Months::Jan: std::cout << "Январь" << std::endl; break;
		case Months::Feb: std::cout << "Февраль" << std::endl; break;
		case Months::March: std::cout << "Март" << std::endl; break;
		case Months::Apr: std::cout << "Апрель" << std::endl; break;
		case Months::May: std::cout << "Май" << std::endl; break;
		case Months::June: std::cout << "Июнь" << std::endl; break;
		case Months::July: std::cout << "Июль" << std::endl; break;
		case Months::Aug: std::cout << "Август" << std::endl; break;
		case Months::Sept: std::cout << "Сентябрь" << std::endl; break;
		case Months::Octeb: std::cout << "Октябрь" << std::endl; break;
		case Months::Nov: std::cout << "Ноябрь" << std::endl; break;
		case Months::Dec: std::cout << "Декабрь" << std::endl; break;
		}

	} while (user_month != 0);
	std::cout << "До свидания";
	return 0;
}