#include <iostream>
using namespace std;
int main() {
	int x;
	cin >> x;
	if (x > 2 && x % 2 == 0) {
		cout << x << "��ż�������жϱ��ʽΪ��x > 2 && x % 2 == 0" << endl;
	}
	else
		cout << x << "������Ҫ��" << endl;
	return 0;
}