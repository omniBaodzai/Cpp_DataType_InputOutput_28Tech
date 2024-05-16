/*
Hàm cin.get(c):
- Nếu không nhập dữ liệu từ bàn phím → thì hàm cin.get(c) sẽ trả về giá trị EOF (End of File)
+) Giá trị EOF là một hằng số đại diện cho sự kết thúc của một số hoặc một luồng dữ liệu
+) Trong C++, giá trị EOF được định nghĩa là một số nguyên âm, thường có giá trị -1.
Điều này cho phép chúng ta kiểm tra xem liệu việc đọc dữ liệu từ `cin.get(c)` 
có thành công hay không bằng cách so sánh giá trị trả về với EOF.
*/

/*
Để tạo ra một trường hợp không hợp lệ, chúng ta có thể thử nhập Ctrl+D (trên Unix-like systems)
hoặc Ctrl+Z (trên Windows) để đạt đến End-Of-File
*/

#include <iostream>

using namespace std;

int main()
{
    char c;

    cout << "Nhap vao mot ki tu: ";
    cin.get(c);

    if (c == EOF)
    {
        cout << "Khong co ki tu duoc nhap." << endl;
    } 
    else
    {
        cout << "Ban vua nhap ki tu: " << c << endl;
    }

    return 0;
}