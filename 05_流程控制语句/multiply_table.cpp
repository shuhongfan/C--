#include<iostream>
using namespace std;

int main()
{
	// 使用双重for循环输出九九乘法表
	// i表示行数，j表示列数
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " × " << i << " = " << i * j << "\t";
		}
		cout << endl;
	}

	cin.get();
}