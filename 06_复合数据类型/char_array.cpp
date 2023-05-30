#include<iostream>
using namespace std;

int main()
{
	char str1[5] = {'h','e','l','l','o'};   // str1并不是一个字符串
	char str2[6] = { 'h','e','l','l','o','\0'};    // str2是一个字符串

	cout << "str1 = " << str1 << endl;
	cout << "str2 = " << str2 << endl;

	char str3[6] = "hello";

	cout << "str3 = " << str3 << endl;

	cout << "str3的长度为： " << sizeof str3 << endl;

	cin.get();
}