#include <iostream>
#include <Windows.h>
int N;

int RevPrint(int N) {
	std::cout << N;
	RevPrint(N - 1);
	return N;
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "������� ����� N, ������� ����� �����������: " << "\n";
	std::cin >> N;
	RevPrint(N);
	std::cout << "������������� ����� N: " << N << "\n";
	return 0;
}