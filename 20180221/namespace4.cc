 ///
 /// @file    helloworld.cpp
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-21 10:39:55
 ///
#include <stdio.h> 
#include <cstdio>
#include <iostream>

using std::cout;
using std::endl;
int a =100 ;

namespace B
{
	int a =1000;
}
namespace A
{
	int a=10;
	void displayA(int a)
	{
		cout << "a=" <<a <<endl;
		cout << "Aa=" <<A::a <<endl;
		cout << "Ba=" <<B::a <<endl;
		cout << "quan a=" << ::a << endl;
	}
}
namespace B
{
	void displayB()
	{
		cout << "displayB()" <<endl;
	}
}


int main(void)
{
	::printf("hello,world!\n");
	A::displayA(3);

	return 0;
}
