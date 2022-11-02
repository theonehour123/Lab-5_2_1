// Лаба №5.2.1А.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int f1(int x1, int x2, int N) {
	int SUM = x1 + x2;
	for (int i = 3; i <= N; i++) {
		int x = x1 + x2;
		SUM += x;
		cout << "p = " << x << "sum = " << SUM << endl;
		x1 = x2; x2 = x;
	}

	return SUM;
}

int f2(int* x1, int* x2, int* N) {
	int SUM = (*x1) + (*x2);
	for (int i = 3; i <= (*N); i++) {
		int x = (*x1) + (*x2);
		SUM += x;
		cout << "p = " << x << "sum = " << SUM << endl;
		(*x1) = (*x2); (*x2) = x;
	}

	return (SUM);
}

int f3(int& x1, int& x2, int& N) {
	int SUM = x1 + x2;
	for (int i = 3; i <= N; i++) {
		int x = x1 + x2;
		SUM += x;
		cout << "p = " << x << "sum = " << SUM << endl;
		x1 = x2; x2 = x;
	}

	return SUM;
}

int main()
{
	int n, p0 = 1, p1 = 1, sum = p0 + p1, t;

	cout << "Enter n "; cin >> n;
	for (int i = 0; ;) {
		cout << "Enter t: "; cin >> t;
		if (t == 1 || t == 2 || t == 3)break;
	}
	if (t == 1) {
		int a = f1(p0, p1, n);
		cout << "sum = " << a << endl;
	}

	if (t == 2) {
		int a = f2(&p0, &p1, &n);
		cout << "sum = " << a << endl;
	}

	if (t == 3) {
		int a = f3(p0, p1, n);
		cout << "sum = " << a << endl;
	}

}
