#include<iostream>
using namespace std;

// 定义一个欢迎函数
void welcome()
{
	// 提示用户输入姓名
	cout << "请输入您的大名：" << endl;

	// 用一个变量来保存键盘输入的信息
	string name;

	cin >> name;

	// 输出一句欢迎信息
	cout << "Hello, " << name << endl;
}