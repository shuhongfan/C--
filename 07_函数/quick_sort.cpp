#include <iostream>

using namespace std;

int partition(int(&)[10], int, int);
void quickSort(int(&)[10], int, int);

void swap(int(&)[10], int , int);
void printArray(const int(&)[10]);

int main()
{
	int arr[10] = { 23, 45, 18, 6, 11, 19, 22, 18, 12, 9 };

	printArray(arr);

	int size = sizeof(arr) / sizeof(arr[0]);
	quickSort(arr, 0, size - 1);

	printArray(arr);

	cin.get();
}

// 定义快速排序函数，递归实现
void quickSort(int(&a)[10], int start, int end)
{
	// 基准情况
	if (start >= end)
		return;

	int mid = partition(a, start, end);

	// 递归调用，分别对两部分继续排序
	quickSort(a, start, mid - 1);
	quickSort(a, mid + 1, end);
}

// 按照支点分区的函数
int partition(int(&a)[10], int start, int end)
{
	// 选取支点
	int pivot = a[start];

	// 指定指向数组头尾元素的“指针”
	int left = start, right = end;

	// 如果左右指针没有相遇，就继续移动
	while (left < right)
	{
		// 左指针不停右移，直到找到一个比支点大的值；右指针不停左移，直到找到一个小的值
		while (a[left] <= pivot && left < right)
			++left;
		while (a[right] >= pivot && left < right)
			--right;

		// 左右互换
		swap(a, left, right);
	}

	// 判断指针相遇位置的值，跟支点值的大小关系
	if (a[left] <= pivot) 
	{
		// 比支点值小，就直接换到数组的头位置
		swap(a, start, left);
		return left;
	}
	else if (a[left] > pivot)
	{
		// 比支点值大，就将前一个位置的元素直接换到数组的头位置
		swap(a, start, left - 1);
		return left - 1;
	}
}

// 交换数组中的两个元素
void swap(int(&a)[10], int i, int j)
{
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

// 打印输出数组
void printArray(const int(&a)[10])
{
	for (int num : a)
		cout << num << "\t";

	cout << endl;
}