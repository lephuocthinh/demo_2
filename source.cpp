#include <iostream>
using namespace std;

int hieu(int a, int b);

int main()
{
	int a, b;
	cout << "Nhap so nguyen thu 1: ";
	cin >> a;
	cout << "Nhap so nguyen thu 2: ";
	cin >> b;
	hieu(a, b);

	system("pause");
	return 0;
}

int hieu(int a, int b) {
	return a - b;
}
