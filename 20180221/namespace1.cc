 ///
 /// @file    helloworld.cpp
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-21 10:39:55
 ///
 
#include <iostream>


namespace A
{
	void displayA()
	{
		std::cout << "displa" << std::endl;
	}
}
using namespace A;

int cout(int b)
{
	return 1;
}
int main(void)
{
	int t;
	displayA();
	t=cout(1);
	std::cout << "cout="<< cout(1) << std::endl;
	std::cout << "cout="<< t << std::endl;
	return 0;
}
