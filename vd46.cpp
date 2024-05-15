#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << "Kieu 1: " << endl; 
	float a = 10 / 3;
	cout << a << endl;
	cout << (float)a << endl;
	cout << (int)a << endl;
	cout << fixed << setprecision(2) << a << endl;
	
	cout << "--------------------------------------------------------------" << endl;
	
	cout << "Kieu 2: " << endl;
	float b = (float)10 / 3;
	cout << b << endl;
	cout << (int)b << endl;
	//cout << fixed << setprecision(2) << b << endl;
	
	cout << "-------------------------------------------------------------" << endl;
	
	cout << "Kieu 3: " << endl;
	int c = 10.0 / 3;
	cout << c << endl;
	cout << (int)c << endl;
	cout << (float)c << endl;
	//cout << fixed << setprecision(2) << c << endl;
	
	cout << "-------------------------------------------------------------" << endl;
	
	cout << "Kieu 4: " << endl;
	int d = 10.1 / 3;
	cout << d << endl;
	cout << (int)d << endl;
	cout << (float)d << endl;
	//cout << fixed << setprecision(2) << d << endl;
	
	cout << "-------------------------------------------------------------" << endl;
	
	cout << " Kieu 5: " << endl;
	int e = 10 / 3;
	cout << e << endl;
	cout << (float)e << endl;
	//cout << fixed << setprecision(2) << e << endl;
	
	cout << "-------------------------------------------------------------" << endl;
	
	cout << "Kieu 6: " << endl;
	int f = (float)10 / 3;
	cout << f << endl;
	cout << (float)f << endl;
	//cout << fixed << setprecision(2) << f << endl;
	
	cout << "-------------------------------------------------------------" << endl;
	
	cout << 10 / 3 << endl;
	cout << 10.0 / 3 << endl;
	cout << 10 / 3.0 << endl;
	
	cout << "-------------------------------------------------------------" << endl;
	
	//float z = 10 / 3;
	//cout << fixed << setprecision(2) << z << endl;
	cout << fixed << setprecision(2) << 10 / 3 << endl;
	cout << fixed << setprecision(2) << 10.0 / 3 << endl;
	cout << fixed << setprecision(2) << 10 / 3.0 << endl;
	
	//cout << 10.0 % 3 << endl;
	
	return 0;
}