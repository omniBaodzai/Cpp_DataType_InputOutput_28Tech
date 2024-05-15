/*
Ví dụ về kiểu pair đơn giản
*/

#include <iostream>
#include <utility>

using namespace std;

int main()
{
    //Cách 1:
    pair<int, float> z;
    cout << z.first << " " << z.second << endl;
    
    //Cách 2:
    pair<int, int> a = make_pair(20, 100);
    cout << a.first << " " << a.second << endl;

    //Cách 3:
    pair<char, int> b = {'@', 40};
    cout << b.first << " " << b.second << endl;

    //Cách 4:
    pair<char, char> c('@', '#');
    cout << c.first << " " << c.second << endl;

    return 0;

}