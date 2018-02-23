 ///
 /// @file    computer.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-22 21:10:48
 ///

#include <string.h>

#include <iostream>
using std::cout;
using std::endl;

class Computer
{
public:
	Computer(const char * brand ,float price)
	: _brand(new char [strlen(brand)+1]())
	, _price(price)
	{
		cout << "Computer (const char * ,float)" << endl;
		strcpy(_brand, brand);

	}
#if 0
	Computer(const Computer & rhs)
	: _brand(new char[str])
#endif
	void print();

	void setBrand(const char * brand);

	void setPrice(float price);

private:
	char _brand[20];
	float _price;

};

void print()
{
	cout << "print()" << endl ;
}

void Computer::print()
{
	cout << "brand" << _brand << endl;
	cout << "brand" << _price << endl;

}

void Computer::setBrand(const char * brand)
{
	strcpy(_brand,brand);
}

void Computer::setPrice(float price)
{
	_price = price;
}

int main(void)
{
	int a;
	Computer com;
	com.setBrand("xiaomi");
	com.setPrice(4999);
	com.print();


//	com._price = 6000;

	return 0;
}
