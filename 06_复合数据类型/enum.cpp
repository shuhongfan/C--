#include<iostream>

using namespace std;

// 定义一个枚举类型
enum Week
{
	Mon, Tue, Wed, Thu = 10, Fri, Sat, Sun
};

int main()
{
	Week w1 = Mon, w2 = Tue;
	//Week w3 = 3;   // 错误

	Week w3 = Week(3);
	Week w4 = Sun;
	Week w5 = Week(20);

	cout << "w1 = " << w1 << endl;
	cout << "w2 = " << w2 << endl;
	cout << "w3 = " << w3 << endl;
	cout << "w4 = " << w4 << endl;
	cout << "w5 = " << w5 << endl;

	cin.get();
}