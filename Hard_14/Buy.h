#pragma once
#include <iostream>
#include "Product.h"                           // ���������� ��� �������
using namespace std;

class Buy : public Product                      // ����������� ��� Product, ������� ��� Check
{

public:

	Buy();
	Buy(int);
	Buy(string, int, int, int);                 // ������� �����������, ������� ������� ����� ���������� � ������� �����
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
