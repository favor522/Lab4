#include <iostream>
#include <Windows.h>
double A, B, C, D, X, Y, Min, Max;

int MinMax(double X, double Y){
	double Z, Min, Max;
	if (X < Y) {
		Max = Y;
		Min = X;
	}
	else {
		Z = Y;
		Y = X;
		X = Z;
		Max = Y;
		Min = X;
	}

	std::cout << "Минимальное значение: " << Min << "\n" << "Максимальное значние: " << Max << "\n";
	return 1;
}
int main1() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "Введите значения A, B, C, D через пробел:" << "\n";
	std::cin >> A >> B >> C >> D;
	MinMax(A, B);
	MinMax(B, C);
	MinMax(C, D);
	MinMax(A, D);
	return 0;
}