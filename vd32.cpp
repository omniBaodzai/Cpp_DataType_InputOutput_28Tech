/*
Tính căn bậc 3 của x
*/

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	int n = 27;
	int can = (int)cbrt(n);
	cout << can << endl;

	double res = cbrt(100);
	cout << fixed << setprecision(2) << res << endl;
    
    return 0;
}