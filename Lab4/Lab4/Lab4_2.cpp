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
	std::cout << "Введите значения A, B, и тип операции:" << "\n" << "(1 - вычитание, 2 - умножение, 3 - умножение, 4 - сложение) : " << "\n";
	std::cin >> A >> B >> Op;
	Calc(A, B, Op);
	std::cout << "Ваш ответ: " << N1 << "\n";
	return 0;
}