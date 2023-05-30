#include <iostream>
#include <string>
using namespace std;

// 定义一个返回学生信息的函数，加上默认实参
string stuInfo(string name = "", int age = 18, double score = 60)
{
	string info = "学生姓名：" + name + "\t年龄：" + to_string(age) + "\t成绩：" + to_string(score);

	return info;
}

//string stuInfo(string name, int age = 18, double score);   // 错误

int main()
{
	cout << stuInfo() << endl;
	cout << stuInfo("张三", 18, 60) << endl;
	cout << stuInfo("李四") << endl;
	cout << stuInfo("王五", 69.5) << endl;
	//cout << stuInfo(19, 69.5) << endl;
	//cout << stuInfo(, , 69.5) << endl;

	cin.get();
}