#include<iostream>

using namespace std;

int main()
{
	// 数组的定义
	int a1[10];

	const int n = 4;
	double a2[n];

	int i = 4;
	//double a3[i];   // 错误，元素个数不能为变量

	// 初始化
	int a3[4] = {1,2,3,4};
	float a4[] = {2.5, 3.8, 1.79};
	short a5[10] = {3,6,9};    // 正确，只对数组前三个元素赋值，其它元素都为0
	//short a6[2] = { 3,6,9 };   // 错误，初始值太多
	//int a6[4] = a3;     // 错误，不能用另一个数组对数组进行赋值

	char c[10];
	cout << "c = " << c << endl;

	cout << "----------------------------" << endl;

	// 访问
	int a[] = { 1,2,3,4,5,6,7,8 };
	cout << "a[2] = " << a[2] << endl;
	a[2] = 36;
	cout << "a[2] = " << a[2] << endl;

	//cout << "a[8] = " << a[8] << endl;

	// 获取数组长度
	cout << "a数组所占空间大小为：" << sizeof(a) << endl;
	cout << "a数组中每个元素所占空间大小为：" << sizeof(a[0]) << endl;

	int aSize = sizeof(a) / sizeof(a[0]);
	cout << "数组a的长度为：" << aSize << endl;

	cout << "a = " << a << endl;

	// 遍历
	for (int i = 0; i < aSize; i++)
	{
		cout << "a[" << i << "] = " << a[i] << endl;
	}

	for (int num : a)
	{
		cout << num << endl;
	}

	cin.get();
}