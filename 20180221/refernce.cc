 ///
 /// @file    refernce.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-21 20:37:53
 ///
 
#include <iostream>
using std::cout;
using std::endl;

#if 0
void swap(int x,int y)
{
	int temp=x;
	x=y;
	y=temp;
}
#endif
#if 1
void swap(int * p,int * q)
{
	int temp = *p;
	*p=*q;
	*q=temp;
}

#endif

#if 0
void swap(int & x,int & y)
{
	int temp =x;
	x=y;
	y = temp;
}
#endif
void test1()
{
	int a = 3;
	int b= 4;
	cout << "交换前："<< endl;
	cout << "a=："<< a << endl;
	cout << "b=："<< b << endl;
	//swap(a,b);
	swap(&a,&b);
	cout << "交换后："<< endl;
	cout << "a=："<< a << endl;
	cout << "b=："<< b << endl;
}

int main(void)
{
	test1();
	return 0;
}
