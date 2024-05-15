/*
Ép kiểu dữ liệu
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int a = 10, b = 3;
	
	float thuong1 = (float)a / b;
	cout << fixed << setprecision(2) << thuong1 << endl;

	float thuong2 = 1.0 * a / b;
	cout << fixed << setprecision(2) << thuong2 << endl;
    
	return 0;
}