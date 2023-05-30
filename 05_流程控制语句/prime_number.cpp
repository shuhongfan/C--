#include<iostream>
using namespace std;

// 定义一个判断质数的函数，返回bool类型结果
bool isPrime(int num)
{
	int i = 2;
	while (i < num)
	{
		if (num % i == 0)
		{
			return false;
		}
		++i;
	}

	return true;
}

int main()
{
	cout << "请输入一个自然数（不超过20亿）：" << endl;

	int num;
	cin >> num;

	// 定义一个布尔类型的标志位
	//bool result = true;
	//int i = 2;
	//while (i < num) 
	//{
	//	if (num % i == 0)
	//	{
	//		result = false;
	//		break;
	//	}
	//	++i;
	//}

	// 根据标志位判定结果
	//if (result)
	//	cout << num << "是质数！" << endl;
	//else
	//	cout << num << "不是质数！" << endl;

	if (isPrime(num))
		cout << num << "是质数！" << endl;
	else
		cout << num << "不是质数！" << endl;

	// 输出0~100内的所有质数
	cout << "0~100内的所有质数为：" << endl;

	for (int i = 2; i <= 100; i++)
	{
		if (isPrime(i))
			cout << i << "\t";
	}

	cout << endl;

	cin.get();
	cin.get();
}