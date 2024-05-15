/*
Hàm pow(x,y) : Trả về lũy thừa xy,
lưu ý là hàm này trả về số thực double nên nếu bạn muốn 
tính lũy thừa với x và y nguyên thì cần lưu kết quả dưới dạng số nguyên 
hoặc ép kiểu khi in ra.
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <typeinfo>

using namespace std;

int main()
{
    int a = 2, b = 10;
    
    //1024 là kiểu dữ liệu số thực
    cout << "Ket qua o dang so thuc: " << a << "^" << b << " = " << pow(a, b) << endl;
    
    //1024 là kiểu dữ liệu số nguyên
    cout << "Ket qua o dang so nguyen: " << a << "^" << b << " = " << (long long)pow(a, b) << endl;
    
    //Nếu không thích thì lưu giá trị của pow và biến số nguyên nen 1024 la so nguyen
    long long kq = pow(a, b);
    cout << "Gia tri cua ham pow duoc luu vao bien so nguyen: " <<  kq << endl;
    
    //Nghịch xem ra kết quả như nào :))
    cout << fixed << setprecision(1) << (long long)pow(a, b) << endl;
    cout << fixed << setprecision(1) << (long long)pow(a, b) << endl; 
    cout << fixed << setprecision(1) << (double)pow(a, b) << endl;
    
    //Kiểu tra kiểu dữ liệu của hàm pow khi chưa ép kiểu
    cout << "Kieu du lieu cua pow(a, b) khi chua ep kieu: " << typeid(pow(a, b)).name() << endl;
    
    //Khi đã ép kiểu
    cout << "Kieu du lieu cua pow(a, b) khi da ep kieu la: " << typeid((long long)pow(a, b)).name() << endl;
    
    //Tính căn bật 5 của n
    int n = 100;
    double res = pow(n, 1.0 / 5);
    cout << fixed << setprecision(3) << res << endl;

    return 0;

}