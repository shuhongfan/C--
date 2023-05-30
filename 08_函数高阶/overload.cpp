#include <iostream>

using namespace std;

// const参数的重载测试
void fun(int x)
{
	cout << x << endl;
}

// 常量作为形参，跟不加const完全等价
//void fun(const int x)
//{
//	cout << x << endl;
//}

void fun2(int* p) {}
//void fun2(int* const pc) {}

void fun3(int& x) { cout << "1" << endl; }
void fun3(const int& x) { cout << "2" << endl; }

void fun4(int* p) {}
void fun4(const int* p) {}

void f() { cout << "1" << endl; }
void f(int x) { cout << "2" << endl; }
void f(int x, int y) { cout << "3" << endl; }
void f(double x, double y = 1.5) { cout << "4" << endl; }

// 作用域和重载测试
void print(int i)
{
	cout << "i: " << i << endl;
}

void print(double d)
{
	cout << "d: " << d << endl;
}

void print(string s)
{
	cout << "s: " << s << endl;
}

int main()
{
	// const用法
	int i = 0;
	const int ci = i;   //  正确
	i = 10;
	i = ci;     // 正确

	// 指针常量
	int* p = &i;
	int* const pc = p;
	p = pc;

	// 常量引用
	int& i2 = i;
	//int& i3 = ci;   // 错误
	const int& ci2 = ci;
	const int& ci3 = i;   // 正确

	fun3(3.14);
	fun3(ci);

	// 指向常量的指针
	//int* p = &i;
	//int* p2 = &ci;   // 错误
	const int* cp = &ci;
	const int* cp2 = &i;   // 正确

	f(3.14);
	//f(10, 3.14);

	void print(int i);
	void print(string s);

	print(10);
	print(3.14);
	print("hello");

	cin.get();
}