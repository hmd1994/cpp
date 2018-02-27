 ///
 /// @file    Myiog.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-26 21:32:40
 ///
#include "Mylog.h" 

Mylog * Mylog::_pInstance = NULL;

Mylog * Mylog::getInstance()
{
	if(NULL== _pInstance)
	{
		_pInstance = new Mylog();
	}
	return _pInstance;
}

Mylog::Mylog()
: cat(log4cpp::Category::getRoot())
{
	log4cpp::Appender * ostreamAppender = new log4cpp::OstreamAppender("cout",&cout);

}

