#include <iostream>

using namespace std;

// 让传入的x递增1
//void increase(int x)
//{
//	++x;
//}

void increase(int* p)
{
	++(*p);
}

// 使用引用作为形参
void increase(int& x)
{
	++x;
}

// 比较两个字符串的长度
bool isLonger(const string & str1, const string & str2)
{
	return  str1.size() > str2.size();
}

// 遍历数组元素进行打印
//void printArray(const int arr[])
//{
//
//}

void printArray(const int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}

	cout << endl;
}

// 使用数组引用作为形参
void printArray(const int(& arr)[5])
{
	for (int num : arr)
		cout << num << "\t";

	cout << endl;
}

int main()
{
	int n = 0;

	// 传值参数
	//increase(&n);
	//increase(&n);

	// 传引用参数
	increase(n);

	cout << "n = " << n << endl;

	string str1 = "hello world", str2 = "hello";

	//isLonger(str1, str2);
	isLonger("hello world", "hello");

	int arr[5] = {1,2,3,4,5};

	printArray(arr, 5);

	printArray(arr);

	cin.get();
}