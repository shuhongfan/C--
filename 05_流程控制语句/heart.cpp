#include<iostream>
using namespace std;

int main()
{
	// 爱心曲线方程 (x^2 + y^2 - a)^3 - x^2 * y^3 = 0
	double a = 0.8;
	// 定义绘图边界
	double bound = 1.3 * sqrt(a);

	// x、y坐标变化步长
	double step = 0.05;

	// 二维扫描所有点，外层逐行扫描
	for (double y = bound; y >= -bound; y -= step)
	{
		// 内层逐点扫描
		for (double x = -bound; x <= bound; x += 0.5 * step)
		{
			// 代入曲线方程，计算每个点是否在曲线内
			double result = pow((pow(x, 2) + pow(y, 2) - a), 3) - pow(x, 2) * pow(y, 3);
			if (result <= 0)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}

	cin.get();
}