#include<iostream>
using namespace std;

int main()
{
	cout << "==============猜数字================" << endl;

	cout << "游戏规则：输入0~100的整数，有5次机会\n" << endl;

	// 生成随机数
	srand(time(0));
	int target = rand() % 100;

	// 利用循环不断进行猜测
	int n = 0;    // 猜的次数
	while (n < 5)
	{
		cout << "请输入0~100的整数：" << endl;

		int num;
		cin >> num;

		if (num == target)
		{
			cout << "恭喜你，猜对了！幸运数字是：" << num << endl;
			break;
		}
		else if (num  > target)
		{
			cout << "数字太大了，请再猜一遍！" << endl;
		}
		else
		{
			cout << "数字太小了，请再猜一遍！" << endl;
		}

		++n;
	}

	if (n == 5)
	{
		cout << "已经猜过5遍了，没有猜中！欢迎下次再来！" << endl;
	}

	cin.get();
	cin.get();
}