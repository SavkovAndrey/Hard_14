#pragma once
#include <iostream>
#include "Buy.h"                           // подключаем ЕГО базовый
using namespace std;

class Check : public Buy                    // Выводит инфу о товаре и покупке (производный от Bay)
{
public:
	Check();
	Check(string, int, int, int);
	~Check();
	void Print();
	void Print_G();

private:
};