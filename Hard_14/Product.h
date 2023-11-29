#pragma once
#include <iostream>
using namespace std;

class Product                  // базовый для всех класс
{
public:
	Product();
	Product(string, int, int);
	~Product();
	
	void SetName(string);
	void SetPrice(int);
	void SetWeight(int);
	
	string GetName();
	int GetPrice();
	int GetWeight();

	void Print();

private:
	string name;               // название
	int price = 0;             // цена
	int weight = 0;            // вес
};
