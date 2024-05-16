/*
Kiểm tra mã ASCII của một kí tự
*/

#include <iostream>

using namespace std;

int main()
{
    char c = 'A';

    cout << c << endl; //A
    cout << c + 10 << endl; //65 + 10 = 75

    //cout << c + 10 << endl; //số 10 không có mã ASCII
    
    cout << c + '9' << endl; //65 + 57 = 122 (z)
    cout << (int)c << endl; //65

    return 0;
}