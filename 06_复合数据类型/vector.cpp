#include<iostream>
#include<vector>
using namespace std;

int main()
{
	// 默认初始化
	vector<int> v1;
	// 列表初始化(拷贝初始化)
	vector<char> v2 = {'a','b','c'};
	vector<char> v3{ 'a','b','c' };

	// 直接初始化
	vector<short> v4(5);
	vector<long> v5(5, 100);

	// 访问元素
	cout << v5[3] << endl;
	v5[3] = 25;
	cout << v5[3] << endl;
	//cout << v5[6] << endl;    // 错误

	cout << "v5的长度为：" << v5.size() << endl;

	// 遍历所有元素
	for (int i = 0; i < v5.size(); i++)
	{
		cout << v5[i] << "\t";
	}

	cout << endl;

	// 添加元素
	v5.push_back(69);

	for (int num : v5)
	{
		cout << num << "\t";
	}

	cout << endl;

	// 向容器中添加倒序的元素
	for (int i = 10; i > 0; i--)
	{
		v1.push_back(i);
	}
	for (int num : v1)
	{
		cout << num << "\t";
	}

	cout << endl;

	cin.get();
}