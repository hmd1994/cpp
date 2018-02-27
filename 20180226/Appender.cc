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
#include <log4cpp/FileAppender.hh>
using std::cout;
using std::endl;
using namespace std;

/*
   
Category(种类)   Appender(附加目的)   Layout(布局)

Priority(优先级)   


 */

int main(void)
{
	log4cpp::OstreamAppender* osAppender = new log4cpp::OstreamAppender("osAppender",&cout);
//创建一个Appener,appender代表日志输出的目的地
	log4cpp::Appender* fileAppender = new log4cpp::FileAppender("fileAppender","wangdao.log");
	log4cpp::PatternLayout* pLayout=new log4cpp::PatternLayout();
	pLayout->setConversionPattern("%d: %p %c %x: %m%n");
/*
 %c category;
 %d 日期
 %m 消息
 %n 换行符
 %p 优先级
 %r 自从layout被创建后的毫秒数
 %r 从1970年1，1，0开始到目前为止的秒数
 %u 进程开始到目前为止的时钟在周期数
 %x NDC
 
%d: %p %c %x: %m%n" = "时间：优先级 Category NDC: 消息 换行"
*/
	osAppender->setLayout(pLayout);

	log4cpp::PatternLayout * pLayout2 = new log4cpp::PatternLayout();
	pLayout2->setConversionPattern("%d: %p %c %x: %m%n");
	fileAppender->setLayout(pLayout2);
//设置日志的布局



	log4cpp::Category& root = log4cpp::Category::getRoot();

//从系统中得到Category的根，将Appender添加到该Cat中
	root.addAppender(osAppender);
	root.setPriority(log4cpp::Priority::DEBUG);
//设置Category的优先级
	
	root.warn("this is a warn message");
	root.error("this is a error message");
	root.info("sthis is an info message");




//	root.error("hello log4cpp in a error message!");

//	root.warn("hello log4cpp in a warning message");
//记录日志


	log4cpp::Category::shutdown();
//关闭Category
	return 0;
}

