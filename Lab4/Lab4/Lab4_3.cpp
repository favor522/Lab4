#include <iostream>
#include <Windows.h>
#include <math.h>

void RevPrint(int N) {
	if (N > 0) {
		std::cout << N%10;
		RevPrint(N / 10);
	}
}
int main1() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int N;
	std::cout << "Введите целое, не отрицательное число N, которое нужно отзеркалить: " << "\n";
	if (not(std::cin >> N) || (N < 0)) {
		std::cout << "Произошла ошибка! Скорее всего вы не соблюдали условия. Перезапустите программу!";
		return 1;
	}
	std::cout << "Отзеркаленное число N: " <<"\n";
	RevPrint(N);
	return 0;
}