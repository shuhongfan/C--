#include <iostream>

using namespace std;

// 用递归的方式定义阶乘函数
int factorial(int n)
{
	// 基准情况
	if (n == 1)
		return 1;

	return factorial(n - 1) * n;
}

// 用递归的方式实现斐波那契数列的计算
int fib(int n)
{
	// 基准情况
	if (n == 1 || n == 2)
		return 1;

	return fib(n - 1) + fib(n - 2);
}

int main()
{
	cout << "5! = " << factorial(5) << endl;

	cout << "fib(9) = " << fib(9) << endl;

	cin.get();
}