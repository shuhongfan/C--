#include<iostream>

using namespace std;

int main()
{
	string num1 = "32535943020935527435432875";
	string num2 = "9323298429842985843509";

	string result;

	// 定义两个指针，指向两数的个位
	int p1 = num1.size() - 1;
	int p2 = num2.size() - 1;

	// 用一个变量保存当前进位
	int carry = 0;

	// 循环遍历，两数对齐进行相加
	while (p1 >= 0 || p2 >= 0 || carry != 0)
	{
		// 判断数据是否遍历完成，如果完成则补0
		int x = (p1 >= 0) ? (num1[p1] - '0') : 0;
		int y = (p2 >= 0) ? (num2[p2] - '0') : 0;

		int sum = x + y + carry;
		carry = sum / 10;    // 和的十位保存在carry里
		result += (sum % 10 + '0');   // 和的个位转换成字符保存到结果中

		// 指针向前移动，考察下一位
		--p1;
		--p2;
	}

	// 对结果进行翻转
	int i = 0, j = result.size() - 1;
	while (i < j)
	{
		char temp = result[i];
		result[i] = result[j];
		result[j] = temp;

		++i;
		--j;
	}


	cout << num1 << " + " << num2 << " = " << result;

	cin.get();

}