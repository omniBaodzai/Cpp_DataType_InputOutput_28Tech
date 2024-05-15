/*
Sử dụng toán tử với kiểu pair
*/

#include <iostream>
#include <utility>

using namespace std;

int main()
{
    pair<int, int> p1 = make_pair(10, 20);
    pair<int, int> p2 = make_pair(10, 21);
    pair<int, int> p3 = {5, 35};

    cout << boolalpha << (p1 == p2) << endl;
    cout << boolalpha << (p1 != p2) << endl;
    cout << boolalpha << (p1 < p2) << endl;
    cout << boolalpha << (p1 > p3) << endl;

    return 0;
}