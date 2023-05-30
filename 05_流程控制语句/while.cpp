#include<iostream>
using namespace std;

int main()
{
	cout << "循环开始...\n" << endl;
	// 定义循环变量
	int i = 1;
	while (i <= 10)
	{
		cout << "Hello World" << endl;
		cout << "现在是第" << i++ << "次循环\n" << endl;
		//++i;
	}

	cout << "----------------------------" << endl;

	do
	{
		cout << "现在是倒数第" << --i << "次循环\n" << endl;
		cout << "GoodBye World" << endl;
	} while (i > 1);

	cout << "循环结束...\n" << endl;

	cin.get();
}