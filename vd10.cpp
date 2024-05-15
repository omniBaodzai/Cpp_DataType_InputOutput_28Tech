/*
Hiển thị giá trị là "true" hoặc "flase" thay vì 1 hay 0
thì sử dụng boolalpha
*/

#include <iostream> 

using namespace std;

int main()
{
    bool check1 = true;
    bool check2 = false;

    cout << check1 << " " << check2 << endl;
    cout << boolalpha << check1 << endl;
    cout << boolalpha << check2 << endl;

    return 0;
}