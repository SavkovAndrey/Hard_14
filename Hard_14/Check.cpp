#include "Check.h"           // работает с одним инклудом (так как нету ввода-вывода)

#include <iomanip>

Check::Check()
{
}
           // создали конструктор и вызвали конструктор одного из БАЗОВЫХ классов и сразу передали в него все параметры
           // т.е. фактически в сам конструктор Check не попадает НИЧЕГО , все 4 параметра идут в конструктор Buy

Check::Check(string name, int price, int weight, int piece) : Buy(name, price, weight, piece)
{

}

Check::~Check()
{
}

void Check::Print()             // в методе класса Check используем сразу два метода двух классов БАЗОВЫХ...
{                               // через такую схему можно использовать любые методы базовых классов...
	Product::Print(); 
	Buy::Print();    
}

void Check::Print_G()          // Вывод через ГЕТТЕРЫ двух родительских классов
{
	cout << endl << endl;
	cout << setw(15) << "Название: " << GetName() << endl;
	cout << setw(15) << "Цена: " << GetPrice() << " руб.\n";
	cout << setw(15) << "Вес: " << GetWeight() << " кг.\n";
	cout << setw(15) << "Колличество: " << GetPiece() << " штук.\n";
	cout << setw(15) << "Общая цена: " << GetTotal_Price() << " руб.\n";
	cout << setw(15) << "Общий вес: " << GetTotal_Weight() << " кг.\n\n";
}