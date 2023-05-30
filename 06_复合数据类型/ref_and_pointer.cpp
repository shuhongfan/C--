#include<iostream>

using namespace std;

int main()
{
	int a = 10;

	// 引用和指针常量
	int& ref = a;
	int* const p = &a;

	ref = 20;
	cout << "a = " << a << endl;
	*p = 15;
	cout << "a = " << a << endl;

	cout << "a的地址为：" << &a << endl;
	cout << "ref的地址为：" << &ref << endl;
	cout << "p的地址为：" << &p << endl;
	cout << "p的值为：" << p << endl;

	// 绑定指针的引用
	int* ptr = &a;
	int*& pref = ptr;

	*pref = 100;
	cout << "a = " << a << endl;

	cin.get();
}