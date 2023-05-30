#include<iostream>
using namespace std;

int main()
{
	// 整型
	short a = -20;
	cout << "a = " << a << endl;
	cout << "a的长度为：" << sizeof a << endl;

	int a2 = 20;
	cout << "a2 = " << a2 << endl;
	cout << "a2的长度为：" << sizeof a2 << endl;

	long a3 = 20;
	cout << "a3 = " << a3 << endl;
	cout << "a3的长度为：" << sizeof a3 << endl;

	long long a4 = 20;
	cout << "a4 = " << a4 << endl;
	cout << "a4的长度为：" << sizeof a4 << endl;

	// 无符号整型
	unsigned short s1 = -1;
	cout << "s1 = " << s1 << endl;

	// 字符类型
	char c = 65;
	cout << "c = " << c << endl;
	char c2 = c + 1;
	cout << "c + 1 = " << c2 << endl;

	// 布尔类型
	bool b1 = true;
	cout << "b1 = " << b1 << endl;
	cout << "b1占据长度为： " << sizeof b1 << endl;

	// 浮点类型
	float f = 2.5;
	double d = 3.79E-23;

	cout << "f = " << f << endl;
	cout << "d = " << d << endl;

	// 字面值常量
	// 整型
	30;
	036L;
	0x1ELL;

	// 浮点类型
	3.14f;
	1.25L;

	// 字符类型
	',';
	'A';
	'2';
	"ABCDE";
	'\'';

	// 转义字符
	char tc = '\n';
	cout << "tc = " << tc << endl;

	cout << "Hello World!\t\"Hello C++!\"\n \?" << endl;

	// 赋值时的自动类型转换
	// 1. 整数值赋给bool变量
	bool btrans = 25;
	cout << "btrans = " << btrans << endl;

	// 2. 将bool类型的值赋给算数整型
	short strans = false;
	cout << "strans = " << strans << endl;

	// 3. 浮点数赋值给整数类型
	int itrans = 3.94;
	cout << "itrans = " << itrans << endl;

	// 4. 整数值赋值给浮点类型
	float ftrans = 3;
	cout << "ftrans = " << ftrans << endl;

	// 5. 赋值超出了整型范围	
	unsigned short ustrans = 65536;
	cout << "ustrans = " << ustrans << endl;
	strans = 32768;
	cout << "strans = " << strans << endl;

	cin.get();
}