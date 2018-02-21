 ///
 /// @file    helloworld.cpp
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-21 10:39:55
 ///
 
#include <iostream>

using namespace std;

namespace A
{
	void displayA()
	{
		cout << "displa" << endl;
	}
}
using namespace A;

/*int cout(int b)
{
	return 1;
}*/
int main(void)
{
	displayA();
	return 0;
}
