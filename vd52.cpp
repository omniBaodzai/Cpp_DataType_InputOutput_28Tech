/*
Hàm getline:
- Để lấy toàn bộ chuỗi kí tự (Bao gồm cả dấu cách và kí tự xuống dòng)
được nhập vào từ bàn phím → sử dụng hàm getline()
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;

    cout << "Nhap vao mot chuoi: ";
    getline(cin, input);

    cout << "Ban vua nhap chuoi: " << input << endl;

    return 0;
}