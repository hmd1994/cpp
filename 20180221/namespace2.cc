 ///
 /// @file    helloworld.cpp
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-21 10:39:55
 ///
 
#include <iostream>

using std::cout;
using std::endl;
namespace A
{
	void displayA()
	{
		std::cout << "displa" << std::endl;
	}

	namespace B
	{
		void displayB()
		{
			cout << "displayB()" << endl;
		}
	}
}

int main(void)
{
	int t;
	A::displayA();
	A::B::displayB();
	return 0;
}
