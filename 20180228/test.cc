 ///
 /// @file    fileout.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-27 19:23:49
 ///
 
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::cin;


using std::string;
using std::ifstream;
using std::ofstream;
using std::fstream;
using std::vector;

vector<string> lines;


typedef struct _link  //定义链表存储不重复的单词
{
	char * ch;
	int num;
	_link* next;
}link;



void test1(void)
{
	ifstream ifs;
	ifs.open("zy.cc");
	if(!ifs)
	{
		cout << "ifstream open error!" << endl;
		return;
	}
	//string word;
	string line;
//	test1();
//	test2();
	
	WordStatistic::readFile();
	return 0;
}
