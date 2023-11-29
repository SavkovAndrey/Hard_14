#include <iostream>
#include <iomanip>
#include "Buy.h"
using namespace std;


//------------------------------------------ Construct
Buy::Buy()
{
	piece = 0;
	total_price = 0;
	total_weight = 0;
}

Buy::Buy(int piece)
{
	this->piece = piece;
	int t_price = GetPrice();
	int t_weight = GetWeight();
	total_price = piece * t_price;
	total_weight = piece * t_weight;
}

// 4 параметра попала в конструктор (из конструктора Check). 1 используем в конструкторе , 3 передаем в конст. баз. класса

Buy::Buy(string name, int price, int weight, int piece) : Product(name, price, weight)
{
	this->piece = piece;                    // формируем параметры для объекта Check!! 
	int t_price = GetPrice();               // так как изначально создан объект check
	int t_weight = GetWeight();
	total_price = piece * t_price;
	total_weight = piece * t_weight;
}

Buy::~Buy()
{
}

//--------------------------------------------- Metod
void Buy::Print()
{
	cout << endl;
	cout << setw(15) << "Товара куплено:  " << piece << endl;
	cout << setw(15) << "На сумму:  " << total_price << " руб." << endl;
	cout << setw(15) << "Общий вес:  " << total_weight << " кг." << endl;
}

//---------------------------------------------- Get::Set
void Buy::SetPiece(int piece)         // при установке колличества, общая цена и вес считаются сами
{
	this->piece = piece;
	int t_price = GetPrice();
	int t_weight = GetWeight();
	total_price = piece * t_price;
	total_weight = piece * t_weight;
}

void Buy::SetTotal_price(int total_price)
{
	this->total_price = total_price;
}

void Buy::SetTotal_Weight(int total_weight)
{
	this->total_weight = total_weight;
}

int Buy::GetPiece()
{
	return piece;
}

int Buy::GetTotal_Price()
{
	return total_price;
}

int Buy::GetTotal_Weight()
{
	return total_weight;
}
