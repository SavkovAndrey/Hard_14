#include <iostream>
#include <iomanip>
//#include "Product.h"
//#include "Buy.h"
#include "Check.h"               // ���������� ������ ��� �����, ������� ������� ����������
                                 // � main. � ������� ������� ���������� ��� ��������
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	// �������� ����������� Check, �� �������� ����������� Buy , � ��� �������� Product

	Check first("��������", 10, 5, 100);
	first.Print();

	// ������������� ����� ����� �������

	Check second;
	second.SetName("����");
	second.SetPrice(30);
	second.SetWeight(5);
	second.SetPiece(15);

	second.Print();

	// ������������� , ����� ����� ����� �������

	second.Print_G();

	system("pause");
	return 0;
}



