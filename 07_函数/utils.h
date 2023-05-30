#pragma once
#include<iostream>
using namespace std;

// 立方和函数
int cubeSum(int x, int y)
{
	return pow(x, 3) + pow(y, 3);
}

// 阶乘函数
int factorial(int n)
{
	int result = 1;
	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}

	return result;
}


// 显示自身被调用多少次的函数
int callCount()
{
	static int count = 0;
	++count;

	cout << "我被调用了" << count << "次！" << endl;

	return count;
}

string copyStr(string str, int n);