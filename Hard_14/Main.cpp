#include <iostream>
#include <iomanip>

using namespace std;

class Product                  // ������� ��� ���� �����
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
	string name;               // ��������
	int price = 0;             // ����
	int weight = 0;            // ���
};

class Buy : public Product                      // ����������� ��� Product, ������� ��� Check
{

public:

	Buy();
	Buy(int);
	Buy(string, int, int, int);
	~Buy();
	void SetPiece(int);
	void SetTotal_price(int);
	void SetTotal_Weight(int);
	int GetPiece();
	int GetTotal_Price();
	int GetTotal_Weight();

	void Print();

private:
	int piece = 0;              // ����������� � ������
	int total_price = 0;        // ����� ����
	int total_weight = 0;       // ����� ���
};

class Check                     // ������� ���� � ������ � ������� (����������� �� Bay)
{
public:
	Check();
	~Check();
	void Print();

private:
};





int main()
{
	setlocale(LC_ALL, "RU");

	Buy aaa("ddddd", 5, 3, 10);
	aaa.Print();



	system("pause");
	return 0;
}

//-------------------------------------------- Product

Product::Product()
{
	name = " ";
	price = 0;
	weight = 0;
}

Product::Product(string name, int price, int weight)
{
	this->name = name;
	this->price = price;
	this->weight = weight;
}

Product::~Product()
{
}

//------------------------------------------- Product Metod

void Product::Print()
{
	cout << endl;
	cout << setw(12) << "��������:  "  << name << endl;
	cout << setw(12) << "����:  "      << price << " ���." << endl;
	cout << setw(12) << "���:  "       << weight << " ��." << endl;
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

Buy::Buy(string name, int price, int weight, int piece) : Product(name, price, weight)
{
	this->piece = piece;
	int t_price = GetPrice();
	int t_weight = GetWeight();
	total_price = piece * t_price;
	total_weight = piece * t_weight;
}

Buy::~Buy()
{
}

void Buy::Print()
{
	cout << endl;
	cout << setw(15) << "������ �������:  " << piece << endl;
	cout << setw(15) << "�� �����:  " << total_price << " ���." << endl;
	cout << setw(15) << "����� ���:  " << total_weight << " ��." << endl;
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

void Check::Print()
{

}