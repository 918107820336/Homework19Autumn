#include <iostream>
using namespace std;
int main() {
	int a = 9, b = 9, c = 9, A = 0, B = 0, C = 0, D = 0;
	cout  << "���һ����ͬmain()�еĶ������" << endl;
		A = a /= 2 + b++ - c++;            //A,B,C,DΪ��ͬmain()�еĶ�����䡣
	a = b = c = 9;
		B = a += b + c++;
	a = b = c = 9;
		C = a -= ++b - c++;
	a = b = c = 9;
		D = a *= b + c--;
	cout << A << endl;                     //���4
	cout << B << endl;                     //���27
	cout << C << endl;                     //���8
	cout << D << endl;                     //���162

	cout << '\n' << "������ͬһmain()�е����" << endl;
	a = b = c = 9;                         //A,B,C,DΪͬһmain()�е���䡣
	A = a /= 2 + b++ - c++;
	B = a += b + c++;
	C = a -= ++b - c++;
	D = a *= b + c--;
	cout << A << endl;                     //���4
	cout << B << endl;                     //���24 a=24,b=10,c=11
	cout << C << endl;                     //���24 a=24,b=11,c=12
	cout << D << endl;                     //���552 a=552,b=11,c=11
	
	return 0;
}