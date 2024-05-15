/*
Hàm min sẽ trả về giá trị nhỏ hơn trong 2 hoặc nhiều số,
trong trường hợp bạn áp dụng hàm min với nhiều số thì cần thêm ngoặc nhọn {}
*/

#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
	int a = 100, b = 200;

	cout << "Min(" << a << ", " << b << ") = " << min(a, b) << endl;
	cout << "Min(10, 20, 15, 4) = " << min({10, 20, 15, 4}) << endl;
	cout << "Min('d', 'b', 'z',) = " << min({'d', 'b', 'z'}) << endl;
    
    return 0;
}