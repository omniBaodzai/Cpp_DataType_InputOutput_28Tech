/*
Hàm swap() nằm trong thư viện algorithm: hoán đổi giá trị của hai biến
*/

#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
	int a = 100, b = 200;

	//Dùng hàm có sẵn
	swap(a, b);
	cout << a << " " << b << endl;

	//Tự code
	char x = '@', y = '#';

	char temp = x;
	x = y;
	y = temp;
	cout << x << ' ' << y << endl;
    
    return 0;
}