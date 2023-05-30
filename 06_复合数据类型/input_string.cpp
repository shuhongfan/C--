#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str, str2;

	// 1. 使用输入操作符读取单词
	//cin >> str >> str2;

	//cout<< str << str2 << endl;

	// 2. 使用getline读取一行信息

	string str3;
	getline(cin, str3);
	cout << "str3 = " << str3 << endl;

	// 3. 使用cin.get()读取一个字符
	char ch;
	ch = cin.get();

	cout << "ch = " << ch << endl;

	cin.get();
	cin.get();
}