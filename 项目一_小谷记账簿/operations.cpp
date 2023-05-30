#include "common.h"
#include "account_item.h"

// 读取文件中的账目数据
void loadDataFromFile(vector<AccountItem>& items)
{
	ifstream input(FILENAME);

	// 逐行读取每一条账目，包装成AccountItem
	AccountItem item;
	while (input >> item.itemType >> item.amount >> item.detail)
	{
		items.push_back(item);
	}

	input.close();
}

// --------------------1. 记账-------------------------
// 记账操作
void accounting(vector<AccountItem>& items)
{
	// 读取键盘选择，并做合法性校验
	char key = readMenuSelection(3);

	switch (key)
	{
	case '1':   // 1 - 收入
		income(items);
		break;
	case '2':   // 2 - 支出
		expand(items);
		break;
	//case '3':   // 3 - 返回主菜单
	//	break;
	default:
		break;
	}
}

// 记录一笔收入
void income(vector<AccountItem>& items)
{
	// 新构建一个AccountItem对象
	AccountItem item;

	// 类型已经确定，就是收入
	item.itemType = INCOME;

	// 与用户交互，键盘输入金额和备注信息
	cout << "\n本次收入金额：";
	item.amount = readAmount();

	cout << "\n备注：";
	getline(cin, item.detail);

	// 添加到vector中
	items.push_back(item);
	// 写入文件做持久化保存
	insertIntoFile(item);

	// 显示成功信息
	cout << "\n------------------------记账成功！--------------------------\n" << endl;
	cout << "\n请按回车键返回主菜单..." << endl;

	string line;
	getline(cin, line);
}

// 记录一笔支出
void expand(vector<AccountItem>& items)
{
	// 新构建一个AccountItem对象
	AccountItem item;

	// 类型已经确定，就是支出
	item.itemType = EXPAND;

	// 与用户交互，键盘输入金额和备注信息
	cout << "\n本次支出金额：";
	item.amount = - readAmount();
	
	cout << "\n备注：";
	getline(cin, item.detail);

	// 添加到vector中
	items.push_back(item);
	// 写入文件做持久化保存
	insertIntoFile(item);

	// 显示成功信息
	cout << "\n------------------------记账成功！--------------------------\n" << endl;
	cout << "\n请按回车键返回主菜单..." << endl;

	string line;
	getline(cin, line);
}

// 将一条账目写入文件中
void insertIntoFile(const AccountItem& item)
{
	// 创建一个ofstream对象，以追加方式进行写入
	ofstream output(FILENAME, ios::out | ios::app);

	output << item.itemType << "\t" << item.amount << "\t" << item.detail << endl;

	output.close();
}


// --------------------2. 查询-------------------------
// 查询操作
void query(const vector<AccountItem>& items)
{
	// 读取键盘选择，并做合法性校验
	char key = readMenuSelection(4);

	switch (key)
	{
	case '1':   // 1 - 查询所有账目，并统计总收支
		queryItems(items);
		break;
	case '2':   // 2 - 查询收入，统计总收入
		queryItems(items, INCOME);
		break;
	case '3':   // 3 - 查询支出，统计总支出
		queryItems(items, EXPAND);
		break;
	default:
		break;
	}
}

// 查询账目功能函数
void queryItems(const vector<AccountItem>& items)
{
	cout << "---------------- 查询结果 ---------------------" << endl;
	cout << "\n类型\t\t金额\t\t备注\n" << endl;

	// 遍历所有账目，统计总收支
	int total = 0;
	for (auto item : items)
	{
		printItem(item);
		total += item.amount;
	}

	// 输出信息
	cout << "===================================================\n" << endl;
	cout << "总收支：" << total << endl;
	cout << "\n请按回车键返回主菜单..." << endl;

	string line;
	getline(cin, line);
}

// 函数重载
void queryItems(const vector<AccountItem>& items, const string itemType)
{
	cout << "---------------- 查询结果 ---------------------" << endl;
	cout << "\n类型\t\t金额\t\t备注\n" << endl;

	// 遍历所有账目，统计总收入或总支出
	int total = 0;
	for (auto item : items)
	{
		if (item.itemType != itemType)
			continue;
		printItem(item);
		total += item.amount;
	}

	// 输出信息
	cout << "===================================================\n" << endl;
	cout << ((itemType == INCOME) ? "总收入：" : "总支出：") << total << endl;
	cout << "\n请按回车键返回主菜单..." << endl;

	string line;
	getline(cin, line);
}

// 打印输出一条账目信息
void printItem(const AccountItem& item)
{
	cout << item.itemType << "\t\t" << item.amount << "\t\t" << item.detail << endl;
}