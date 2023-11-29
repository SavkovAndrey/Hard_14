#include <iostream>
#include <iomanip>
//#include "Product.h"
//#include "Buy.h"
#include "Check.h"               // Подключаем только тот класс, который реально используем
                                 // в main. К базовым классам обратиться сам дочерний
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	// вызываем конструктор Check, он вызывает конструктор Buy , а тот вызывает Product

	Check first("пельмени", 10, 5, 100);
	first.Print();

	// альтернативно можно через СЕТТЕРЫ

	Check second;
	second.SetName("Вася");
	second.SetPrice(30);
	second.SetWeight(5);
	second.SetPiece(15);

	second.Print();

	// альтернативно , можно вывод через ГЕТТЕРЫ

	second.Print_G();

	system("pause");
	return 0;
}



