 ///
 /// @file    Word.h
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-28 15:40:47
 ///
 
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

using std::stringstream;
using std::istringstream;
using std::ostringstream;
using std::ifstream;
using std::ofstream;

struct dictionary{
	string word;
	int count;

};

class WordStatistic
{
public:
	WordStatistic();

	void readFile(const string & filename);
	void writeFile(const string & filename);


private:

	vector<dictionary> _res;
};






