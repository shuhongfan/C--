#include<iostream>

using namespace std;

// 定义一个结构体
struct StudentInfo
{
	string name;
	int age;
	double score;
}stu2, stu3 = {"小明", 19, 65.0};

// 输出一个数据对象的完整信息
void printInfo(StudentInfo stu)
{
	cout << "学生姓名：" << stu.name << "\t 年龄：" << stu.age << "\t 成绩：" << stu.score << endl;
}

int main()
{
	// 创建数据对象并做初始化
	StudentInfo stu = {"张三", 18, 75.0};
	StudentInfo stu1{"李四", 20, 82};

	StudentInfo stu4 = stu3;

	// 访问数据
	//cout << "学生姓名：" << stu.name << "\t 年龄：" << stu.age << "\t 成绩：" << stu.score << endl;

	stu2.name = "王五";
	stu2.age = 22;
	stu2.score = 60.0;

	printInfo(stu);
	printInfo(stu1);
	printInfo(stu2);
	printInfo(stu3);

	// 结构体数组
	StudentInfo s[3] = {
		{"小红", 17, 85.5},
		{"小白", 18, 72.5},
		{"小黄", 20, 66.5}
	};

	printInfo(s[1]);
	s[2].age = 21;
	cout << s[2].age << endl;

	for (StudentInfo stu: s)
	{
		printInfo(stu);
	}

	cin.get();
}