/*
typedef còn dùng để định nghĩa cho kiểu pair
*/

#include <iostream>
#include <utility>

using namespace std;

typedef char kitu;
typedef pair<int, int> ii;

int main()
{
    kitu c = '@';
    cout << c << endl;

    ii p = {10, 20};
    cout << p.first << " " << p.second << endl;

    return 0;


}