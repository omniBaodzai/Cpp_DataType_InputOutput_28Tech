/*
Kiểu pair lồng nhau
*/

#include <iostream>
#include <utility>

using namespace std;

int main()
{
	//Cach 1:
	pair<int, pair<char, int>> p0;
	cout << p0.first << endl;
	cout << p0.second.first << " " << p0.second.second << endl;

	cout <<"----------------------------------------------------" << endl;

	//Cach 2:
	pair<int, pair<char, int>> p1 = make_pair(10, make_pair('@', 20));
	cout << p1.first << endl;
	cout << p1.second.first << " " << p1.second.second << endl;

    cout <<"----------------------------------------------------" << endl;
	
	//Cach 3:
	pair<int, pair<int, int>> p2 = {40, {30, 50}};
	cout << p2.first << endl; 
	cout << p2.second.first << " " << p2.second.second << endl;

    cout <<"----------------------------------------------------" << endl;
	
	pair<pair<int, int>, pair<float, double>> p3 = {{76, 56}, {3.14, 2.5768}};
	cout << p3.first.first << " " << p3.first.second << endl;
	cout << p3.second.first << " " << p3.second.second << endl;

    cout <<"----------------------------------------------------" << endl;
	
	//Cach 4:
	pair<pair<int, int>, pair<int, int>> p4({33, 34}, {45, 46});
	cout << p4.first.first << " " << p4.first.second << endl;
	cout << p4.second.first << " " << p4.second.second << endl;
	
	return 0;
}