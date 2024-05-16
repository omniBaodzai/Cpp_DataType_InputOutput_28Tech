/*
Hàm cin.get(c):
- cin.get(c): nhập một kí tự từ bàn phím và lưu vào biến kí tự c
- Hàm này chỉ đọc đúng 1 kí tự duy nhất, bao gồm cả khoảng trắng và xuống dòng
*/

#include <iostream>

using namespace std;

int main()
{
    char c;

    cout << "Nhap vao mot ki tu: ";
    cin.get(c);

    cout << "Ban vua nhap vao ki tu: " << c << endl;

    return 0;
}