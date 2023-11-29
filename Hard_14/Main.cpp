#include <iostream>
#include <iomanip>

using namespace std;

class Product
{
public:
	Product();
	~Product();

private:
	string name;
	int price;
	int weight;
};



int main()
{
	setlocale(LC_ALL, "RU");





	system("pause");
	return 0;
}


Product::Product()
{
}

Product::~Product()
{
}