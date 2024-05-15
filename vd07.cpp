/*
Kiểu dữ liệu số nguyên, số thực, kí tự, đúng sai
*/

#include <iostream>

using namespace std;

int main()
{
    //Số nguyên
    int a = 28;
    long long b = 282828282828282;

    //Số thực
    float c = 3.8912;
    double d = 10.8912781;

    //Kí tự
    char kitu = '@';

    //Luận lý
    bool check1 = true;
    bool check2 = false;

    cout << "Gia tri cua a : " << a << endl;
    cout << "Gia tri cua b : " << b << endl;

    cout << "Gia tri cua c : " << c << endl;
    cout << "Gia tri cua d : " << d << endl;

    cout << "Gia tri cua kitu : " << kitu << endl;
    
    cout << "Gia tri cua check : " << check1 << endl;
    cout << "Gia tri cua check : " << check2 << endl;

    return 0;
}