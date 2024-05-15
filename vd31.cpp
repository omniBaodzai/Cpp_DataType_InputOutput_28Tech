/*
Tính căn bận 2 của một số
- Việc ép kiểu `(int)` trong trường hợp này không cần thiết. 
Hàm `sqrt()` trả về một giá trị kiểu `double`, 
và nếu gán trực tiếp kết quả đó vào một biến kiểu `int`, 
giá trị sẽ được tự động chuyển đổi từ `double` sang `int`mà không cần ép kiểu rõ ràng.
Khi đó, giá trị trả về từ `sqrt(n)` sẽ được tự động chuyển đổi thành kiểu `int` 
và gán cho biến `can` mà không cần sử dụng ép kiểu `(int)`.
*/

#include <iostream>
#include <math.h>
#include <iomanip>
#include <typeinfo>

using namespace std;

int main()
{
	int n = 100;

	int can1 = sqrt(n);
	int can2 = (int)sqrt(n);

	cout << "can 1: " << can1 << endl;
	cout << "Kieu du lieu can 1 la: " << typeid(can1).name() << endl;
	
	cout << "can 2: " << can2 << endl;
	cout << "Kieu du lieu can 2 la: " << typeid(can2).name() << endl;
	
	double res = sqrt(1000);
	cout << fixed << setprecision(2) << res << endl;

    return 0;
}