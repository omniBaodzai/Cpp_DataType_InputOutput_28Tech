/*
Toán tử tăng giảm
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n = 100;
    ++n; // n = 101
    cout << n << endl;

    n++; // n = 102
    cout << n << endl;

    n--; // n = 101
    cout << n << endl;

    --n; // 100
    cout << n << endl;
    
	return 0;
}