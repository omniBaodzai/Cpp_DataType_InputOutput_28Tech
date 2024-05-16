/*
Kiểm tra mã ASCII của một kí tự
*/

#include <iostream>

using namespace std;

int main()
{
    char c = 'A';
    c += 32;

    cout << c << endl; //a
    cout << c + 10 << endl; //97 + 10 = 107


    cout << c + '9' << endl; //97 + 57 = 157 (z)
    cout << (int)c << endl; //65

    return 0;
}