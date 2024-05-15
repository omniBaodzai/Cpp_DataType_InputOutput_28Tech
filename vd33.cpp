/*
Hàm ceil(): làm tròn lên số nguyên gần nhất
*/

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	double a = 10000000.0;
	double b = 3.8;
	
	long long c = ceil(a);
	cout << c << endl;
	
	cout << ceil(a) << endl;
	
	cout << (int)ceil(a) << " " << (int)ceil(b) << endl;
	
    return 0;
}