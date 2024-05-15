/*
Nhập dữ liệu từ bàn phím với cin
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, a, b, c;

    cout << "Nhap gia tri cho n : ";
    cin >> n;
    cout << "Gia tri n vua nhap la : " << n << endl;

    cout << "Nhap gia tri cho a, b, c : ";
    cin >> a >> b >> c;
    cout << "Gia tri a, b, c : " << a << " " << b << " " << c << endl;
    
    return 0;
}