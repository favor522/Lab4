#include <iostream>
#include <Windows.h>
#include <math.h>
double A, B, Op, N1, N2, N3;

double Calc(double A,double B, int Op) {
	if (Op == 1) {
		N1 = A - B;
	}
	if (Op == 2) {
		N1 = A * B;
	}
	if (Op == 3) {
		N1 = A / B;
	}
	if (Op >= 4) {
		N1 = A + B;
	}
	return N1;
}
int main2() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "������� �������� A, B, � ��� ��������:" << "\n" << "(1 - ���������, 2 - ���������, 3 - ���������, 4 - ��������) : " << "\n";
	std::cin >> A >> B >> Op;
	Calc(A, B, Op);
	std::cout << "��� �����: " << N1 << "\n";
	return 0;
}