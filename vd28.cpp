/*
Toán tử tăng giảm
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n = 100;
    
    cout << n++ << endl; // In 100 sau đó tăng n lên 101
    cout << n << endl; // 101

    cout << ++n << endl; // tăng n lên 102 sau đó in 102
    cout << n << endl; // 102

	return 0;
}