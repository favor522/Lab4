#include <iostream>
#include <Windows.h>

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
int main2() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double A, B, C, D, X, Y;
	std::cout << "Введите значения A, B, C, D через пробел:" << "\n";
	
	if (not(std::cin >> A >> B >> C >> D)) {
		std::cout << "Произошла ошибка! Скорее всего вы не соблюдали условия. Перезапустите программу!";
		return 1;
	}
	MinMax(A, B);
	MinMax(B, C);
	MinMax(C, D);
	MinMax(A, D);
	return 0;
}