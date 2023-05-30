#include<iostream>
using namespace std;

int main()
{
	int i = 1;
	while (true)
	{
		cout << "Hello World" << endl;
		cout << "现在是第" << i++ << "次循环\n" << endl;
	
		// 根据i的值判断是否需要退出循环
		if (i > 10)
		{
			break;
		}
	}

	cin.get();
}