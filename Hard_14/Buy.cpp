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

// 4 ��������� ������ � ����������� (�� ������������ Check). 1 ���������� � ������������ , 3 �������� � �����. ���. ������

Buy::Buy(string name, int price, int weight, int piece) : Product(name, price, weight)
{
	this->piece = piece;                    // ��������� ��������� ��� ������� Check!! 
	int t_price = GetPrice();               // ��� ��� ���������� ������ ������ check
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
	cout << setw(15) << "������ �������:  " << piece << endl;
	cout << setw(15) << "�� �����:  " << total_price << " ���." << endl;
	cout << setw(15) << "����� ���:  " << total_weight << " ��." << endl;
}

//---------------------------------------------- Get::Set
void Buy::SetPiece(int piece)         // ��� ��������� �����������, ����� ���� � ��� ��������� ����
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
