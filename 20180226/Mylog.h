 ///
 /// @file    Mylog.h
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-26 21:21:28
 ///
#ifndef __WD_MYLOG_H__
#define __WD_MYLOG_H_

#include <log4cpp/Category.hh>
#include <log4cpp/PatternLayout.hh>
#include <log4cpp/FileAppender.hh>
#include <log4cpp/OstreamAppender.hh>
#include <log4cpp/Priority.hh>

#include <string.h>
#include <string>
#include <sstream>
#include <iostream>
using std::cout;
using std::endl;
using std::string;


class Mylog
{
public:
	static Mylog * getInstance();
	static void destory();

	void info(const char * msg);
	void error(const char * msg);
	void warn(const char * msg);
	void debug(const char * msg);
	
private:
	Mylog();
	~Mylog();

private:
	log4cpp::Category & _cat;
	static Mylog * _pInstance;
};
