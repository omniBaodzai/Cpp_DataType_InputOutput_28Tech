/*
Nhập chiều dài, rộng và in ra chu vi, diện tích của hình chữ nhật	
*/

#include <iostream>

using namespace std;

int main()
{
	int dai, rong;
	cout << "Nhap chieu dai, rong : ";
	cin >> dai >> rong;

	int chuvi = 2 * (dai + rong);
	int dientich = dai * rong;

	cout << "Chu vi : " << chuvi << endl;
	cout << "Dien tich : " << dientich << endl;

	return 0;
}