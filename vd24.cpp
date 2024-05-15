/*
Ép kiểu dữ liệu
*/

#include <iostream>

using namespace std;

int main()
{
	//Tran so
	int a = 1000000, b = 1000000;
	long long tich1 = a * b;
	cout << tich1 << endl;
	
	//Luu bien a hoac b o kieu long long
	long long c = 1000000;
	int d = 1000000;
	long long tich2 = c * d;
	cout << tich2 << endl;
	
	//Ep kieu a hoac b thanh long long
	long long tich3 = (long long)a * b;
	cout << tich3 << endl;
	
	//Nhan voi 1ll = 1 long long
	long long tich4 = 1ll * a * b;
	cout << tich4 << endl;
	
	return 0;
}