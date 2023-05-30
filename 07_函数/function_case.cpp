#include <iostream>
#include "utils.h"

using namespace std;

int a = 0;

int main()
{
	//int a = 0;
	//a;

	cout << "5 和 7 的立方和为：" << cubeSum(5, 7) << endl;

	cout << "5的阶乘为：" << factorial(5) << endl;

	cout << copyStr("hello ", 5) << endl;

	for (int i = 0; i < 5; i++)
	{
		callCount();
	}

	//count;

	cin.get();
}