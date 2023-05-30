#include<iostream>
using namespace std;

// 函数声明
void welcome();

/*
 * 主函数
 * 输出Hello World
 */
int main()
{
	// 输出一行信息
	cout << "Hello World!" << endl;

	welcome();

	// 等待键盘输入
	cin.get();
	cin.get();
}