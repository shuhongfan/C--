#include <iostream>

using namespace std;

// 定义一个二分查找函数，递归调用
int search(const int(&a)[10], int start, int end, int target)
{
	// 基准情况，如果数组已经没有元素，或者target超出了范围，没有找到，直接返回-1
	if (start > end || target < a[start] || target > a[end])
		return -1;

	// 计算中间位置坐标
	int mid = (start + end) / 2;

	// 比较中间位置数据和目标值的大小
	if (a[mid] == target)
		return mid;
	else if (a[mid] > target)
		return search(a, start, mid - 1, target);    // 中间值比目标值大，搜索前半部分
	else 
		return search(a, mid + 1, end, target);    // 中间值比目标值小，搜索后半部分
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,9,12,25,38 };

	int key = 10;

	int size = sizeof(arr) / sizeof(arr[0]);

	int result = search(arr, 0, size - 1, key);

	result == -1 ?
		cout << "在数组中没有找到" << key << "!" << endl :
		cout << "在数组中找到" << key << "，索引下标为：" << result << endl;

	cin.get();
}