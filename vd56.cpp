/*
Hàm cin.getline(s, n):
- Nhập tối đa n - 1 kí tự vào xâu s (mảng kí tự char s[100])
- Phương thức cin.getline(s, n) trong C++ được sử dụng để nhập tối đa n-1 kí tự 
vào một chuỗi ký tự s (một mảng ký tự có kích thước đủ lớn, ví dụ char s[100]). 
Hàm này sẽ đọc dữ liệu từ bộ nhớ đệm của đối tượng cin cho đến khi gặp kí tự xuống dòng 
('\n') hoặc đạt đến giới hạn tối đa n-1 kí tự.
*/

#include <iostream>

using namespace std;

int main()
{
    const int MAX_SIZE = 100;
    char input[MAX_SIZE];

    cout << "Nhap vao mot chuoi: ";
    cin.getline(input, MAX_SIZE);

    cout << "Ban vua nhap chuoi: " << input << endl;

    return 0;
}