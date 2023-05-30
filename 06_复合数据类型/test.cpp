#include <iostream>

using namespace std;

void printArr(int arr[5]) 
{
	cout << "size of arr[]: " << sizeof(arr) << endl;
}

//void printArr(int* arr)
//{
//	cout << "size of *arr: " << sizeof(arr) << endl;
//}

int main()
{
	int arr[5] = { 1,2,3,4,5 };

	printArr(arr);

	cin.get();
}