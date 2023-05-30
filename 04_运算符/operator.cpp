#include<iostream>

using namespace std;

int main()
{
	// 1. 算术运算符
	cout << "1 + 2 = " << 1 + 2 << endl;
	cout << "1 + 2 – 3 × 4 = " << 1 + 2 - 3 * 4 << endl;

	int a = 20, b = 6;
	cout << "a + b = " << a + b << endl;
	cout << "a + 1 = " << a + 1 << endl;

	cout << "a / b = " << a / b << endl;
	short a2 = 3;
	long long b2 = 23435;
	cout << "a2 * b2 = " << a2 * b2 << endl;
	cout << "b2 / b = " << b2 / b << endl;

	float a3 = 20;
	cout << "a3 / b = " << a3 / b << endl;

	cout << "a % b = " << a % b << endl;
	cout << "-a % b = " << -a % b << endl;
	//cout << "a3 % b = " << a3 % b << endl;

	// 2. 赋值运算符
	a = 1;
	//1 = a;    // 错误，1不是可修改的左值
	a = b + 5;
	//b + 5 = a;   // 错误
	const int c = 10;
	//c = b;    // 错误

	a = { 10 };
	int arr[] = {1,2,3,4,5};

	a = b = 5;

	// 复合赋值运算符
	int sum = a;
	//sum = sum + b;
	//sum = sum + c;
	sum += b;
	sum += c;

	cout << "a + b + c = " << sum << endl;

	// 递增递减运算符
	cout << "++a = " << ++a << endl;

	int i = 0, j;
	j = ++i;
	//j = i++;
	cout << "i = " << i << endl;
	cout << "j = " << j << endl;

	cout << "------------------------------" << endl;

	// 3. 关系和逻辑运算符
	// 关系
	cout << "1 < 2 :" << (1 < 2) << endl;
	cout << "a < b :" << (a < b) << endl;
	cout << " 10 == 4 + 6 :" << (10 == 4 + 6) << endl;
	cout << " (10 == 4) + 6 : " << ((10 == 4) + 6) << endl;

	// 逻辑
	cout << "1 < 2 && 3 >= 5 : " << (1 < 2 && 3 >= 5) << endl;
	cout << "!(1 < 2 || 3 >= 5) : " << !(1 < 2 || 3 >= 5) << endl;

	// 短路求值
	i = 0;
	1 < 2 && ++i;
	cout << "i = " << i << endl;

	// 条件
	cout << ((1 > 2 && ++i) ? "true" : "false") << endl;

	// 4. 位运算符
	unsigned char bits = 0xb5;
	cout << hex;
	cout << "bits左移2位：" << (bits << 2) << endl;
	cout << "bits左移8位：" << (bits << 8) << endl;
	cout << "bits左移31位：" << (bits << 31) << endl;
	cout << "bits右移3位：" << (bits >> 3) << endl;

	cout << dec;
	cout << (200 << 3) << endl;
	cout << (-100 >> 2) << endl;

	// 位逻辑运算
	cout << (~5) << endl;
	cout << (5 & 12) << endl;
	cout << (5 | 12) << endl;
	cout << (5 ^ 12) << endl;

	// 案例：从一组数里找出只出现一次的那个数
	int i1 = 5, i2 = 12, i3 = 12, i4 = 9, i5 = 5;
	cout << "只出现一次的那个数为：" << (i1 ^ i2 ^ i3 ^ i4 ^ i5) << endl;

	// 5. 类型转换
	// 隐式类型转换
	short s = 15.2 + 20;
	cout << "s = " << s << endl;
	cout << "15.2 + 20 = " << (15.2 + 20) << endl;
	cout << "s 长度为： " << sizeof s << endl;
	cout << "15.2 + 20 长度为： " << sizeof(15.2 + 20) << endl;

	// 关系运算中的类型转换
	a = 1;
	cout << ((0 < a < 100) ? "true" : "false") << endl;
	cout << ((0 < a && a < 100 ) ? "true" : "false") << endl;
	s = 32767;
	cout << " s + 1 = " << s + 1 << endl;
	s++;
	cout << " s = " << s << endl;

	// 强制类型转换
	int total = 20, num = 6;
	double avg = total / num;
	cout << "avg = " << avg << endl;

	// C语言风格
	cout << "avg = " << (double)total / num << endl;
	// C++函数调用风格
	cout << "avg = " << double(total) / num << endl;
	// C++强制类型转换运算符
	cout << "avg = " << static_cast<double>(total) / num << endl;

	cin.get();
}