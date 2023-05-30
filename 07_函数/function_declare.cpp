#include <iostream>

using namespace std;

// 声明函数
//int square(int x);
int square(int);

int main()
{
	int n = 6;

	cout << n << "的平方为：" << square(n) << endl;

	n = 7;
	cout << n << "的平方为：" << square(n) << endl;

	cout << square(3.5) << endl;
	cout << square('a') << endl;

	//cout << square("hello") << endl;
	//cout << square(3, 5) << endl;

	cin.get();

}

// 定义一个平方函数 y = x ^ 2
int square(int x)
{
	/*int y = x * x;
	return y;*/

	return x * x;
}