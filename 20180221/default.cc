 ///
 /// @file    default.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-21 22:46:36
 ///
 
#include <iostream>
using std::cout;
using std::endl;

int add(int x,int y = 10)
{
	return x+y;
}
#if 0
int add(int x,int y,int z=1)
{
	return x+y+z;
}
#endif
int main(void)
{
	int a = 1, b = 2;
	cout << "a+B=" << add(a,b) << endl;
	cout << "a+b ="<< add(a)<< endl;

	return 0;
}
