#pragma once
#include <iostream>
using namespace std;

class Product                  // ������� ��� ���� �����
{
public:
	Product();
	Product(string, int, int);         // � ������ ����������� ����������� ��������� ( �� �� ����������)
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
