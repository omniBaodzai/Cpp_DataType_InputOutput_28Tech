/*
Nếu bạn sử dụng chuẩn C++11 hoặc mới hơn thì bạn có thể sử dụng using 
để thay cho typedef 
*/

#include <iostream>
#include <iomanip>

using namespace std;

using ll = long long;
using ii = pair<int, int>;
using kitu = char;

int main()
{
	ll n = 1923919231345;
	cout << n << endl;

	ii p = {10, 20};
	cout << p.first << ' ' << p.second << endl;

	kitu x = '@';
	cout << x << endl;
    
    return 0;
}