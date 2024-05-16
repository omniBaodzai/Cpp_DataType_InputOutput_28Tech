/*
- Khi người dùng nhập nhiều kí tự và bạn sử dụng hàm cin.get(c), hàm này sẽ 
chỉ lấy kí tự đầu tiên được nhập và lưu nó vào biến c. 
- Các kí tự còn lại sẽ được lưu trong bộ nhớ đệm (buffer) của đối tượng cin 
để sử dụng cho các lần đọc tiếp theo.
*/

/*
- Nếu người dùng nhập chuỗi "Hello" và sau đó bạn gọi cin.get(c), chỉ kí tự 'H' đầu tiên 
sẽ được lấy và gán cho biến c. Các kí tự 'e', 'l', 'l', 'o' sẽ tiếp tục nằm trong bộ nhớ đệm 
của cin và có thể được đọc bởi các lời gọi cin.get() hoặc các hàm đọc khác như cin >>
*/

#include <iostream>

using namespace std;

int main()
{
    char c1, c2;

    cout << "Nhap vao hai ki tu: ";
    cin.get(c1);
    cin.get(c2);

    cout << "Ban vua nhap hai ki tu: " << c1 << " " << c2 << endl;

    return 0;
}

