#include<iostream>

using namespace std;

int main()
{
	const int n = 8;
	int arr[n] = { 1,2,3,4,5,6,7,8 };

	// 1. 直接创建新数组，遍历元素反向填入
	int newArr[n];
	for (int i = 0; i < n; i++)
	{
		newArr[n-i-1] = arr[i];
	}

	// 2. 利用双指针，基于原数组的翻转
	int head = 0, tail = n - 1;

	while (head < tail)
	{
		// 头尾元素对调
		int temp = arr[head];
		arr[head] = arr[tail];
		arr[tail] = temp;

		// 让头尾指针向中间移动
		++head;
		--tail;
	}

	// 打印数组
	for (int num : arr)
	{
		cout << num << "\t";
	}

	cout << endl;

	cin.get();
}