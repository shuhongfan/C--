#include <iostream>
#include <string>

using namespace std;

string stuInfo(string name = "", int age = 18, double score = 60)
{
	string info = "学生姓名：" + name + "\t年龄：" +
		to_string(age) + "\t平均成绩：" + to_string(score);

	return info;
}

const string& longerStr(const string& str1, const string& str2)
{
	return str1.size() > str2.size() ? str1 : str2;
}


int main()
{
	string(*fp) (string, int, double) = nullptr;
	const string& (*fp1) (const string&, const string&);

	fp = &stuInfo;
	fp = stuInfo;

	fp1 = longerStr;
	fp1 = &longerStr;

	cout << (*fp1)("hello", "world") << endl;
	cout << fp1("hello", "world") << endl;

	// 函数指针作为形参
	void selectStr(const string&, const string&, const string & (const string&, const string&));
	void selectStr(const string& s1, const string& s2, const string & (*fp)(const string&, const string&));
	void selectStr(const string & s1, const string & s2, const string & fp(const string&, const string&));

	// 类型别名
	typedef const string& Func(const string&, const string&);   // 函数类型
	typedef const string& (*Funcp)(const string&, const string&);   // 函数指针类型
	void selectStr(const string&, const string&, Func);

	typedef decltype(longerStr) Func2;
	typedef decltype(longerStr) *Funcp2;

	// 函数指针作为返回值
	Func* fun(int);
	//Func fun(int);    // 错误
  	Funcp fun2(int);

	auto fun3(int) -> Funcp;   // 尾置返回类型

	cin.get();
}