 ///
 /// @file    Word.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-28 15:49:46
 ///
 
#include "Word.h"
#include <fstream>
#include <sstream>
#include <iostream>
using std::ofstream;
using namespace std;

WordStatistic::WordStatistic()
{
	_res.reserve(300);
}


void countWord(vector<dictionary> & vec,string word)
{
	int i;
	int count = static_cast<int>(vec.size());//vec.size()返回当前vector所包含元素的数目
	for(i=0;i< count;i++)
	{
		if(vec[i].word == word)
			break;
	}

	if(i==count)
	{
		dictionary dic;//
		dic.word = word;
		dic.count = 1;
		vec.push_back(dic);//添加值为val的元素到当前vector末尾
	}
	else{
		vec[i].count++;
	}

}


void WordStatistic::readFile(const string & filename)
{
	ifstream ifs(filename);
	if(!ifs)
	{
		cout << "ifstream open error" <<endl;
		return ;
	}
	string line;

	string word;
	while(getline(ifs,line))
	{
		istringstream iss(line);//
		while(!iss.eof())//bool eof()  如果到达相关联的输入文件的末尾，eof（）函数返回true，否则返回false
		{
			iss >> word;
			countWord(_res,word);
		}
	}
	ifs.close();
}



void WordStatistic::writeFile(const string & filename)
{
		ofstream ofs(filename);
		if(!ofs.good())
		{
			cout << "ofstream open error" << endl;
			return ;
		}
		for(auto & elem : _res)//
		{
			ofs << elem.word << "   " <<elem.count <<endl;
		}
		cout << "success" <<endl;
		ofs.close();
}

int main(void)
{
	char filename[256];
	cout << "pleause inpute your filename:" <<endl;
	cin.getline(filename,256);
	WordStatistic word;
	word.readFile(filename);
	word.writeFile("dictionary.dat");
	return 0;

}
