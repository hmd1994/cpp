 ///
 /// @file    log4cpphello.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-26 14:42:28
 ///
 
#include <iostream>
#include <log4cpp/Category.hh>
#include <log4cpp/OstreamAppender.hh>
#include <log4cpp/PatternLayout.hh>
#include <log4cpp/Priority.hh>
using std::cout;
using std::endl;
using namespace std;

/*
   
Category(种类)   Appender(附加目的)   Layout(布局)

Priority(优先级)   


 */

int main(int argc,char* argv[])
{
	log4cpp::OstreamAppender* osAppender = new log4cpp::OstreamAppender("osAppender",&cout);
//创建一个Appener，并指定包含的Layout
	log4cpp::PatternLayout* pLayout=new log4cpp::PatternLayout();
	pLayout->setConversionPattern("%d: %p %c %x: %m%n");
	osAppender->setLayout(pLayout);

	log4cpp::Category& root = log4cpp::Category::getRoot();
	log4cpp::Category& infoCategory = root.getInstance("infoCategory");
//从系统中得到Category的根，将Appender添加到该Cat中
	root.addAppender(osAppender);
	root.setPriority(log4cpp::Priority::DEBUG);
//设置Category的优先级
	
	infoCategory.info("system is runing");
	infoCategory.warn("system has awaring");
	infoCategory.error("system has a error,can't find a file");
	infoCategory.fatal("system has fatal error,must be shutdown");
	infoCategory.info("system shutdown,you can find some information in system log");




//	root.error("hello log4cpp in a error message!");

//	root.warn("hello log4cpp in a warning message");
//记录日志


	log4cpp::Category::shutdown();
//关闭Category
	return 0;
}

