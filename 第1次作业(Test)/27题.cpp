#include <iostream>
using namespace std;
int main() {
	int a = 9, b = 9, c = 9, d = 9;
	a = !('5' > '8') || 3 < 9;
	b = 6 > 3 + 2 - ('0' - 8);
	c = 3 * 5 | 6 << 2;
	d = 'a' == 'b' <= 3 & 5;
	cout << a << endl;                     //���1
	cout << b << endl;                     //���1
	cout << c << endl;                     //���31
	cout << d << endl;                     //���0

	return 0;
}