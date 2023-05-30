#pragma once
#include "common.h"

// 定义结构体类型
struct AccountItem
{
	string itemType;
	int amount;
	string detail;
};

// 针对账目数据进行操作的函数声明

// 加载账目数据
void loadDataFromFile(vector<AccountItem>& items);

// 记账
void accounting(vector<AccountItem>& items);
void insertIntoFile(const AccountItem& item);
void income(vector<AccountItem>& items);
void expand(vector<AccountItem>& items);

// 查询
void query(const vector<AccountItem>& items);
void queryItems(const vector<AccountItem>& items);
void queryItems(const vector<AccountItem>& items, const string itemType);
void printItem(const AccountItem& item);