/*
- Hàm getline() sẽ đọc từng kí tự cho đến khi gặp kí tự xuống dòng (`'\n'`) 
hoặc kết thúc tệp (`EOF`). 
- Sau đó, nó lưu trữ chuỗi kí tự trong biến chuỗi `input`. 
Vì `input` là một đối tượng của lớp `std::string`, nó không giới hạn kích thước
và có thể tự động mở rộng để chứa chuỗi dài hơn.
- Sử dụng getline() để lấy nhiều dòng văn bản
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    cout << "Nhap vao nhieu dong van ban (nhap 'q' de ket thuc):\n";

    while (getline(cin, input))
    {
        if (input == "q")
        {
            break;
        }
        // Xử lý dòng văn bản ở đây
        cout << "Dong vua nhap: " << input << endl;
    }

    return 0;
}