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
#if 0
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
#if 0
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
#endif

int arr[5]={1,2,3,4,5};
int func()
{
	return arr[0];
}
int & func2()
{
	return arr[0];
}
#if 0
int & func3()
{
	int a= 10;
	return a;
}

int * func4()
{
	int a = 10;
	return &a;
}
#endif
int main(void)
{
	func2()=10;

	cout << "arr[0] = " << arr[0] << endl;

//	int & refa =func3();

//	cout << "refa = "<< refa << endl;

	return 0;
}
