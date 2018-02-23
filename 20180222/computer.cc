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
	void print()
	{
		cout << "brand=" << _brand << endl;
		cout << "price=" << _price << endl;
	}

	void setBrand(const char * brand)
	{
		strcpy(_brand,brand);
	}

	void setPrice(float price)
	{
		_price=price;
	}

private:
	char _brand[20];
	float _price;

};

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
