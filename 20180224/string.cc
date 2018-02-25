 ///
 /// @file    string.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-23 19:51:04
 ///
 //
#include <stdio.h>
#include <string.h>

#include <iostream>
using std::cout;
using std::endl;


class Stack
{
public:
	void push(int);//入栈
	void pop();//出栈
	int top();//读出栈顶
	bool empty();//判断栈空
	bool full();//判断栈满
/*	unsigned int getlen()const;
	const char*getstr()const;*/

	void print();
	Stack()
	{
		stop=0;
		memset(buf,0,sizeof(buf));
	}

private:
	int buf[10];
	int stop;


};

void Stack::push(int s)
{
	if(!full())
	{
		buf[stop]=s;
		stop=stop+1;
		
	}
	else{
		cout << "stack is full" <<endl;
	}
}

void Stack::pop()
{
	if(!empty())
	{
		stop=stop-1;
	}
}

int Stack::top()
{
	if(!empty())
	{
		cout <<"top is =" << buf[stop-1] <<endl;
	}
	else
	{
		cout << "stack is empty" << endl;
	}
	return 1;
}


bool Stack::full ()
{
	return stop>10 ? true:false;
	

}

bool Stack::empty()
{
	return stop<1 ? true:false;
}



/* String::String(const char *pstr)
{
	cout <<"----------str constructor char *-------" << endl;
	if(pstr == NULL)
	{
		len = 0;
		str = new char[1];
		memset(str, 0 ,len+1);
		if(str == NULL) 
			return;
	}
	else{
		len = strlen (pstr);
		str = new char [len + 1];
		memset (str, 0 ,len+1);
		if(str == NULL)
			return;
		strncpy(str, pstr ,len);
	}

}


String::String(const String & rhs)//复制构造函数，默认浅层复制
{
	cout << "-------------string copy-------------" << endl;
	len = rhs.getlen();
	str = new char[len+1];
	for(unsigned int i = 0 ; i < len ; i++)
	{
		str[i] = rhs.str[i];
	}
	str[len] = '\0';

}


String &String::operator = (const String & rhs)//重载复制运算符，用于两个字符串之间的复制
{
	cout <<"-------------------String::operator---------" << endl;
	if (this == &rhs)
		return *this;
	delete []str;
	len = rhs.getlen();
	str = new char [len+1];
	for(unsigned int i= 0;i< len ; i++)
	{
		str[i] = rhs.str[i];
	}
	str[len] = '\0';
	return *this;
}

unsigned int String::getlen()const
{
	return len;
}

const char*String::getstr()const
{
	return str;
}

void String::print()
{
	cout <<"str="<<str<<endl;
}
*/

int main(void)
{
	Stack Stack;
	Stack.push(10);

	Stack.top();
	
	Stack.push(12);
	Stack.top();

	Stack.push(14);
	Stack.top();

	
	Stack.top();
	Stack.pop();

	Stack.top();





	return 0;

}
