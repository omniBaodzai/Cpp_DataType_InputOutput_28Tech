/*
- Typedef giúp bạn tạo một tên mới cho các kiểu dữ liệu trong ngôn ngữ C++

- Sau khi tạo một bí danh mới cho các kiểu dữ liệu đó thì bạn có thể sử dụng tên mới 
hoặc tên cũ của kiểu dữ liệu đó đều được.

- Cú pháp : typedef kiểu_dữ_liệu tên_mới;
*/

#include <iostream>

using namespace std;

typedef int songuyen;
typedef long long ll;
typedef double sothuc;
typedef bool dungsai;

int main()
{
    songuyen a = 50;
    ll b = 134569303103945;
    sothuc c = 3.14159;
    dungsai d = true;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;

    return 0;
}