#pragma once
#include <iostream>
#include "Product.h"                           // подключаем ЕГО базовый
using namespace std;

class Buy : public Product                      // производный для Product, базовый для Check
{

public:

	Buy();
	Buy(int);
	Buy(string, int, int, int);                 // создаем КОНСТРУКТОР, который передас часть параметров в БАЗОВЫЙ класс
	~Buy();
	void SetPiece(int);
	void SetTotal_price(int);
	void SetTotal_Weight(int);
	int GetPiece();
	int GetTotal_Price();
	int GetTotal_Weight();

	void Print();

private:
	int piece = 0;              // колличество в штуках
	int total_price = 0;        // общая цена
	int total_weight = 0;       // общий вес
};
