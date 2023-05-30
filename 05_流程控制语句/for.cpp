#include<iostream>
using namespace std;

int main()
{
	cout << "循环开始...\n" << endl;

	for (int i = 1; i <= 10; i++)
	{
		cout << "Hello World" << endl;
		cout << "现在是第" << i << "次循环\n" << endl;
	}

	cout << "----------------------------" << endl;

	// 范围for循环
	for (int num: {1,2,3,4,5,6,7})
	{
		cout << "序列中现在输出的数据是：" << num << endl;
	}

	cout << "----------------------------" << endl;

	// 嵌套for循环
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << "Hello World! i = " << i << ", j = " << j << endl;
		}
	}

	cout << "循环结束...\n" << endl;

	cin.get();
}