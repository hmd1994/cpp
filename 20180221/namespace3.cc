 ///
 /// @file    helloworld.cpp
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-21 10:39:55
 ///
 
#include <iostream>

namespace B
{
	void displayC();
}
namespace A
{
	int a=100;
	void displayA()
	{
		std::cout << "displa" << std::endl;
		B::displayC();
	}
}
namespace B
{
	void displayB()
	{
		A::displayA();
	}
	void displayC()
	{
		std::cout << "B::displayC()" <<std::endl;
	}
}


int main(void)
{
	A::displayA();
	return 0;
}
