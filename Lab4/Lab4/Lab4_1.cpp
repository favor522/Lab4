#include <iostream>
#include <Windows.h>
double A, B, C, D, X, Y, Min, Max;

int MinMax(){
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
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "Введите значения X, Y, A, B, C, D каждый раз после ввода нажимая Enter :" << "\n";
	std::cin >> X >> Y >> A >> B >> C >> D;
	MinMax();
	return 0;
}