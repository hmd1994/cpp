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


class String
{
public:
	String();
	String(const char *pstr);  //构造函数，带一个参数用来初始化字符串
	String(const String & rhs);//复制构造函数，默认浅层复制
	String & operator = (const String & rhs);//重载复制运算符，用于两个字符串之间的复制
	~String();
	unsigned int getlen()const;
	const char*getstr()const;

	void print();

private:
	char * _pstr;
	unsigned int len;
	char *str;

};

String::String()
{
	cout << "---------String constructor---------" << endl;
	len = 0;
	str = new char[1];
	str[0] = '\0';

}

String::~String()
{
	cout << "------------String destory----------"<<endl;
	delete []str;
	len = 0;

}


String::String(const char *pstr)
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


int main(void)
{
	String str1;
	str1.print();

	String str2 = "Hello, world";
	String str3("wangdao");

	str2.print();
	str3.print();

	String str4 =str3;
	str4.print();

	str4 = str2;
	str4.print();

	return 0;

}
