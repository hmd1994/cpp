//
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
	Computer(const char * brand, float price)
	//: _brand(brand)
	 :_brand(new char [strlen(brand)+1]())
	, _price(price)
	{
		cout << "Computer(const char * , float)" << endl;
		strcpy(_brand, brand);

	}
	~Computer()
	{
		cout << "~Computer()" << endl;
		delete [] _brand;
		_brand = NULL;
	}


	void print();

	void setBrand(const char * brand);

	void setPrice(float price);
	

private:
	char * _brand;
	float _price;

};

void print()
{
	cout << "print()" << endl ;
}

void Computer::print()
{
	cout << "brand" << _brand << endl;
	cout << "price" << _price << endl;

}

void Computer::setBrand(const char * brand)
{
	strcpy(_brand,brand);
}

void Computer::setPrice(float price)
{
	_price = price;
}

Computer pc2("Thinkpad",6666);


int main(void)
{

	char brand[] = "xiaomi";

	Computer com(brand,4999);
	com.print();

	Computer * p =new Computer ("Mac", 1000);
	p->print();

	delete p;

//	com._price = 6000;

	return 0;
}
