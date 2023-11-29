#include <iostream>
#include <iomanip>

using namespace std;

class Product                  // базовый для всех класс
{
public:
	Product();
	~Product();
	void SetName(string);
	void SetPrice(int);
	void SetWeight(int);
	string GetName();
	int GetPrice();
	int GetWeight();

private:
	string name;               // название
	int price = 0;             // цена
	int weight = 0;            // вес
};

class Buy                      // производный для Product, базовый для Check
{
public:
	Buy();
	~Buy();
	void SetPiece(int);
	void SetTotal_price(int);
	void SetTotal_Weight(int);
	int GetPiece();
	int GetTotal_Price();
	int GetTotal_Weight();

private:
	int piece = 0;              // колличество в штуках
	int total_price = 0;        // общая цена
	int total_weight = 0;       // общий вес
};

class Check                     // Выводит инфу о товаре и покупке (производный от Bay)
{
public:
	Check();
	~Check();

private:
};





int main()
{
	setlocale(LC_ALL, "RU");





	system("pause");
	return 0;
}

//-------------------------------------------- Product

Product::Product()
{
}
Product::~Product()
{
}
 
//--------------------------------------------Product::Get::Set
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

//---------------------------------------------- Buy

Buy::Buy()
{
}
Buy::~Buy()
{
}

//---------------------------------------------- Buy::Get::Set
void Buy::SetPiece(int piece)
{
	this->piece = piece;
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

//---------------------------------------------- Check

Check::Check()
{
}
Check::~Check()
{
}