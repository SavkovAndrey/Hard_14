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

Product::Product(string name, int price, int weight)  // ����� ��������� Check -> Buy -> Product
{                                                     // ������������� (��� ��������� ��� ������� Check!)
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
	cout << setw(12) << "��������:  " << name << endl;
	cout << setw(12) << "����:  " << price << " ���." << endl;
	cout << setw(12) << "���:  " << weight << " ��." << endl;
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