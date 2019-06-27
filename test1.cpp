#include <iostream>
#include <stack>
using namespace std;

class MinStack
{
public:
	void push(int val)
	{
		//ѹջ
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
	//����ջ�е�Ԫ��
	stack<int> data;

	//����ջ����Сֵ
	stack<int> min;
};