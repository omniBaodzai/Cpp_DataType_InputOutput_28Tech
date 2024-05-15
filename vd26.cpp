/*
Toán sử logic
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//true && true = true
    bool res1 = (10 < 20) && (20 >= 20);
    cout << "res1: " << res1 << endl;

    //true && true && false = false
    bool res2 = (10 < 20) && (20 == 20) && (5 > 10);
    cout << "res2: " << res2 << endl;

    //false || false || true = true
    bool res3 = (10 > 20) || (20 < 10) || (5 == 5);
    cout << "res3: " << res3 << endl;

    // !(true) = false
    bool res4 = !(10 < 20);
    cout << "res4: " << res4 << endl;

    //!(true && true) = !(true) = false
    bool res5 = !((20 < 30) && (30 > 10));
    cout << "res5: " << res5 << endl;

	return 0;
}