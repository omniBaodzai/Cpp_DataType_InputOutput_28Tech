/*
Toán tử ba ngôi (toán tử điều kiện)
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n = 10 < 20 ? 28 : 82;
    cout << n << endl;

    n = (50 < 50) && (10 > 3) ? 28 : 82;
    cout << n << endl;
    
	return 0;
}