#include "Check.h"           // �������� � ����� �������� (��� ��� ���� �����-������)

#include <iomanip>

Check::Check()
{
}
           // ������� ����������� � ������� ����������� ������ �� ������� ������� � ����� �������� � ���� ��� ���������
           // �.�. ���������� � ��� ����������� Check �� �������� ������ , ��� 4 ��������� ���� � ����������� Buy

Check::Check(string name, int price, int weight, int piece) : Buy(name, price, weight, piece)
{

}

Check::~Check()
{
}

void Check::Print()             // � ������ ������ Check ���������� ����� ��� ������ ���� ������� �������...
{                               // ����� ����� ����� ����� ������������ ����� ������ ������� �������...
	Product::Print(); 
	Buy::Print();    
}

void Check::Print_G()          // ����� ����� ������� ���� ������������ �������
{
	cout << endl << endl;
	cout << setw(15) << "��������: " << GetName() << endl;
	cout << setw(15) << "����: " << GetPrice() << " ���.\n";
	cout << setw(15) << "���: " << GetWeight() << " ��.\n";
	cout << setw(15) << "�����������: " << GetPiece() << " ����.\n";
	cout << setw(15) << "����� ����: " << GetTotal_Price() << " ���.\n";
	cout << setw(15) << "����� ���: " << GetTotal_Weight() << " ��.\n\n";
}