 ///
 /// @file    sonst.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-21 22:07:45
 ///
 
#include <iostream>
using std::cout;
using std::endl;

#define kMax 100



int main(void)
{
	int a = 2;
	int b = 200;
	cout << "a= "<< a << endl;
	
	const int * pa = &a;//常量指针

	cout << "pa = " << *pa << endl;

	pa = &b;
	cout << "pa = " << *pa << endl;


	int const * paa = &a;

	int * const pc = &a;



	return 0;
}
