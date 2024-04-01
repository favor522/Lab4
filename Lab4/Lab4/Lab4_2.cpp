#include <iostream>
#include <Windows.h>
#include <math.h>

void Calc(double A,double B, int Op) {
	double C;
	if (Op == 1) {
		C = A - B;
	}
	if (Op == 2) {
		C = A * B;
	}
	if (Op == 3) {
		C = A / B;
	}
	if ((Op == 4) || (Op > 4)) {
		C = A + B;
	}
	std::cout << "Ваш ответ: " << C << "\n";
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double A, B, N1, N2, N3;
	std::cout << "Введите значения через пробел A, B, и 3 типа операций:" << "\n" << "(1 - вычитание, 2 - умножение, 3 - деление, 4 - сложение) : " << "\n";
	if (not(std::cin >> A >> B >> N1 >> N2 >> N3) || (N1 <= 0) || (N2 <= 0) || (N3 <= 0)) {
		std::cout << "Произошла ошибка! Скорее всего вы не соблюдали условия. Перезапустите программу!";
		return 1;
	}
	Calc(A, B, N1);
	Calc(A, B, N2);
	Calc(A, B, N3);
	return 0;
}