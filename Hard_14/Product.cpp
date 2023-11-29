#include <iostream>
#include <iomanip>
#include "Product.h"
using namespace std;

//------------------------------------------ Construct

Product::Product()
{
	name = " ";
	price = 0;
	weight = 0;
}

Product::Product(string name, int price, int weight)  // ловим параметры Check -> Buy -> Product
{                                                     // устанавливаем (это параметры для ОБЪЕКТА Check!)
	this->name = name;
	this->price = price;
	this->weight = weight;
}

Product::~Product()
{
}

//-------------------------------------------  Metod

void Product::Print()
{
	cout << endl;
	cout << setw(12) << "Название:  " << name << endl;
	cout << setw(12) << "Цена:  " << price << " руб." << endl;
	cout << setw(12) << "Вес:  " << weight << " кг." << endl;
}

//--------------------------------------------  Get::Set
void Product::SetName(string name)
{
	this->name = name;
}
void Product::SetPrice(int price)
{
	this->price = price;
}
void Product::SetWeight(int weight)
{
	this->weight = weight;
}
string Product::GetName()
{
	return name;
}
int Product::GetPrice()
{
	return price;
}
int Product::GetWeight()
{
	return weight;
}