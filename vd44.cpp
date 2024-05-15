/*
- Định nghĩa cho tên cấu trúc hoặc câu lệnh:
Việc sử dụng define để định nghĩa các câu lệnh hay cấu trúc thường được sử dụng 
bởi các bạn lập trình viên trong các cuộc thi về lập trình thi đấu hay thuật toán. 
Mục đích là có thể tiết kiệm thời gian code, tuy nhiên việc này sẽ dẫn tới khó khăn
cho người khác khi cần tham khảo mã nguồn.

Hiện tại các bạn mới học lập trình thì chưa nên sử dụng define với mục đích này,
sau này khi đã code tốt hơn các bạn có thể sử dụng nó để tiết kiệm thời gian code.
Tuy nhiên mình nghĩ bạn chỉ nên sử dụng khi bạn code một mình
và không cần chia sẻ mã nguồn cho người khác.
*/

#include <iostream>
#include <iomanip>
using namespace std;

//Định nghĩa cấu trúc để in ra dòng chữ 28tech.com.vn
#define greet cout << "28tech.com.vn\n";

//Định nghĩa cấu trúc vòng lặp for
#define FOR(i, a, b) for(int i = a; i <= b; i++)

//Định nghĩa cấu trúc để in ra số lớn hơn trong 2 số
#define findMax(a, b) cout << (a > b ? a : b) << endl;


int main()
{
	greet;
	greet;

	findMax(10, 20);
	findMax(100, 50);

	FOR(i, 1, 5)
    {
		cout << i << " ";
	}
    
    return 0;
}