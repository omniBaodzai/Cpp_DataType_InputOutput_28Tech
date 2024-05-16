/*
Phương pháp clear(): 
- Hàm clear() được sử dụng để xóa trạng thái lỗi của đối tượng cin, bao gồm cả bộ nhớ đệm. 
- Nó sẽ đặt lại trạng thái của cin để cho phép bạn tiếp tục đọc dữ liệu sau khi xảy ra lỗi.
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
    cin.clear();

    return 0;
}