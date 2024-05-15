/*
- Define có 3 chức năng chính : 
+) Định nghĩa tên cho kiểu dữ liệu
+) Định nghĩa tên cho giá trị
+) Định nghĩa tên cho cấu trúc hoặc câu lệnh

- Định nghĩa tên cho kiểu dữ liệu:
Define có thể sử dụng để làm công việc tương tự như typedef đó là
định nghĩa tên mới cho kiểu dữ liệu

- Cú pháp : #define tên_mới kiểu_dữ_liệu
*/

#include <iostream> 
#include <utility>

using namespace std;

#define songuyen int
#define ll long long
#define sothuc double
#define kitu char
#define check bool
#define ii pair<int, int>

int main()
{
    songuyen a = 34;
    cout << a << endl;

    ll b = 3959683776485;
    cout << b << endl;

    sothuc c = 3.241253;
    cout << c << endl;

    kitu d = '#';
    cout << d << endl;

    check e = true;
    cout << boolalpha << e << endl;

    ii p = {100, 200};
    cout << p.first << " " << p.second << endl;

    return 0;
}