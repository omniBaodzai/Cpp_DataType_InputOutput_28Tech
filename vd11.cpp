/*
Độ chính xác của một số thập phân
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float a = 3.141992654;
    double b = 49.58693;

    cout << fixed << setprecision(4) << a << endl;
    cout << fixed << setprecision(10) << b << endl;

    return 0;
}