#include<iostream>
#include<string>
using namespace std;

int main()
{
	// 初始化
    // 默认初始化
	string s1;
	// 拷贝初始化
	string s2 = s1;
	string s3 = "Hello world";

	// 直接初始化
	string s4("hello world!");
	string s5(8, 'h');

	cout << s5 << endl;

	// 访问字符
	cout << "s4[2] = " << s4[2] << endl;
	s4[0] = 'H';
	cout << s4 << endl;

	s4[s4.size() - 1] = '\?';
	cout << s4 << endl;

	// 遍历
	for (int i = 0; i < s4.size(); i++)
	{
		s4[i] = toupper(s4[i]);
	}
	cout << s4 << endl;

	// 字符串拼接
	string str1 = "hello", str2("world");
	string str3 = str1 + str2;

	cout << str3 << endl;

	string str4 = str1 + ", " + str2 + "!";
	cout << str4 << endl;

	//string str5 = "hello, " + "world!";    // 错误

	// 字符串比较
	str1 = "hello";
	str2 = "hello world";
	str3 = "hehehe";

	cout << (str1 == str2 ? "true" : "false") << endl;

	cout << (str1 < str2 ? "true" : "false") << endl;

	cout << (str1 >= str3 ? "true" : "false") << endl;

	cin.get();
}