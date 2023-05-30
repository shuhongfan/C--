#include <iostream>

using namespace std;

// 定义一个元素互换的函数，无返回值
void swap(int& x, int& y)
{
	// 判断两数如果相等，就不做交换直接返回
	if (x == y)
		return;

	int temp = x;
	x = y;
	y = temp;
	//return;
}

// 有返回值的函数，返回较长的字符串
const string & longStr(const string& str1, const string& str2)
{
	return  str1.size() > str2.size() ? str1 : str2;
}

int main() 
{
	// 两数交换
	int a = 10, b = 25;

	swap(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	string str1 = "hello world", str2 = "hello C++, how are you?";

	cout << longStr(str1, str2).size() << endl;

	// 返回数组指针
	int arr[5] = { 1,2,3,4,5 };
	int* parr[5];   // 指针数组
	int(* ap)[5] = &arr;   // 数组指针

	int(*fun(int x))[5];   // 函数声明，fun返回值类型为数组指针

	// 简化函数声明
	typedef int arrayT[5];  // arrayT是一个自定义的类型别名，表示长度为5的int数组
	arrayT* fun2(int x);

	// 尾置返回类型
	auto fun3(int x) -> int(*)[5];

	cin.get();
}