/*
Phương pháp ignore():
- Hàm ignore() được sử dụng để loại bỏ một số kí tự từ bộ nhớ đệm của cin. 
- Bạn có thể chỉ định số lượng kí tự muốn loại bỏ hoặc sử dụng một kí tự kết thúc để xác định 
nơi dừng.
*/

#include <iostream>

using namespace std;

int main()
{
    char c;

    cout << "Nhap vao mot ki tu: ";
    cin.get(c);

    cout << "Ban vua nhap ki tu: " << c << endl;

    // Xoa ki tu trong bo nho dem
    cin.ignore();
    cout << c;

    return 0;
}