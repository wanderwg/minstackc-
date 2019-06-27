#include <iostream>
#include <stack>
using namespace std;

class MinStack
{
public:
	void push(int val)
	{
		//压栈
		if (min.empty() || val <= min.top())
			min.push(val);
		data.push(val);
	}
	void pop()
	{
		if (min.top() == data.top())
			min.pop();
		data.pop();
	}
	int top()
	{
		return data.top();
	}
	int getMin()
	{
		return min.top();
	}

private:
	//保存栈中的元素
	stack<int> data;

	//保存栈的最小值
	stack<int> min;
};