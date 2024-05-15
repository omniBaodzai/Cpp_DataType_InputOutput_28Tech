/*
Hàm round(x) : Làm tròn dựa vào phần thập phân của x,
-> nếu phần thập phân của x lớn hơn hoặc bằng 0.5 thì sẽ làm tròn lên,
ngược lại sẽ làm tròn xuống
*/

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	double a = 3.14;
	double b = 3.8;

	cout << (int)round(a) << " " << (int)round(b) << endl;
    
    return 0;
}