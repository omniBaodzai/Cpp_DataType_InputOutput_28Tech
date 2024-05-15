/*
Toán tử chia lấy phần nguyên 
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int a = 10, b = 3;
	int thuong1 = a / b;
	cout << thuong1 << endl;

	float thuong2 = a / b;
	cout << fixed << setprecision(2) << thuong2 << endl;

	return 0;
}