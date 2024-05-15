/*
Hoán vị với kiểu pair
*/

#include <iostream>
#include <utility>

using namespace std;

int main()
{
    pair<int, int> p1 = {20, 30};
    pair<int, int> p2 = {50, 60};

    cout << "Ban dau: " << endl;
    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;

    p1.swap(p2);

    cout << "Sau khi swap: " << endl;
    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;

    return 0;
}