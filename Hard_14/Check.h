#pragma once
#include <iostream>
#include "Buy.h"                           // ���������� ��� �������
using namespace std;

class Check : public Buy                    // ������� ���� � ������ � ������� (����������� �� Bay)
{
public:
	Check();
	Check(string, int, int, int);
	~Check();
	void Print();
	void Print_G();

private:
};