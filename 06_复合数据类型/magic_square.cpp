#include<iostream>

using namespace std;

int main()
{
	const int n = 3;
	int arr[n][n] = {
		{4, 9, 2},
		{3, 5, 7},
		{8, 1, 6}
	};

	// 计算目标和
	int target = (1 + n * n) * n / 2;

	// 使用bool类型标志位表示判定结果
	bool isMagic = true;

	int sumDiag1 = 0, sumDiag2 = 0;

	// 检验
	for (int i = 0; i < n; i++)
	{
		int sumRow = 0;
		int sumCol = 0;
		// 遍历第i行和第i列的每个元素，进行叠加
		for (int j = 0; j < n; j++)
		{
			sumRow += arr[i][j];
			sumCol += arr[j][i];
		}

		// 判断是否等于target
		if (sumRow != target || sumCol != target)
		{
			isMagic = false;
			break;
		}

		sumDiag1 += arr[i][i];
		sumDiag2 += arr[i][n - 1 - i];
	}
	// 判断是否等于target
	if (sumDiag1 != target  || sumDiag2 != target)
	{
		isMagic = false;
	}

	// 输出判定结果
	cout << "给定的矩阵arr" << (isMagic ? "是" : "不是") << n << "阶幻方！" << endl;

	cin.get();

}