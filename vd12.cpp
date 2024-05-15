/*
- setw(): in ra độ rộng mong muốn (các khoảng trắng)
- setfill(): in ra các kí tự mong muốn thay thế cho các khoảng trắng
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n = 12345;

    cout << setw(10) << n << endl;
    cout << setw(10) << setfill('0') << n << endl;
    cout << setw(10) << setfill('#') << n << endl;

    return 0;
}