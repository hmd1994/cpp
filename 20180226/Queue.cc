 ///
 /// @file    Queue.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-02-26 19:25:40
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class Queue
{
public:
	Queue(int size)
	: _size(size)
	, _front(0)
	, _rear(0)
	, _parr(new int[_size]())
	{

	}

	~Queue()
	{
		delete [] _parr;
	}

	bool empty() const
	{
		return _front == _rear;
	}

	bool full() const
	{
		return _front == (_rear + 1) % _size;
	}

	void push(int num)
	{
		if(!full())
		{
			_parr[_rear++] = num;
			_rear %= _size;
		}
		else
			cout << "Queue is full" <<endl;
	}

	void pop()
	{
		if(!empty())
		{
			++_front;
			_front %= _size;
		}
		else
			cout << "Queue is empty" <<endl;

	}

	int front()
	{
		return _parr[_front];
	}

	int back()
	{
		return _parr[(_rear - 1+ _size)% _size];
	}


private:
	int _size;
	int _front;
	int _rear;
	int * _parr;
};


int main(void)
{		
	Queue queue(10);
	cout << "此时queue是否为空？" << queue.empty() << endl;
	queue.push(1);
	cout << "此时queue是否为空？" << queue.empty() << endl;

	for(int idx = 2; idx <12;++idx)
	{
		queue.push(idx);
	}
	cout <<"此时queue是否已满？" << queue.full() << endl;

	queue.pop();
	queue.push(10);
	cout << "queue队尾的元素为："<<queue.back() <<endl;

	while(!queue.empty())
	{
		cout << queue.front() << endl;
		queue.pop();
	}
	cout << "此时queue是否为空？" <<queue.empty()<<endl;
	return 0;

}
