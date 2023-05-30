#include<iostream>

using namespace std;

int main()
{
	const int n = 4;
	int image[n][n] = {
	{ 5, 1, 9, 11},
	{ 2, 4, 8, 10},
	{ 13, 3, 6, 7},
	{ 15, 14, 12, 16}
	};

	// 1. 矩阵转置
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			// 以对角线为对称轴，两边元素进行互换
			int temp = image[i][j];
			image[i][j] = image[j][i];
			image[j][i] = temp;
		}
	}

	// 2. 对每一行进行前后翻转
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n / 2; j++)
		{
			int temp = image[i][j];
			image[i][j] = image[i][n - 1 - j];
			image[i][n - 1 - j] = temp;
		}
	}

	// 打印输出
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) 
		{
			cout << image[i][j] << "\t";
		}
		cout << endl;
	}

	cin.get();

}