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
	std::cout << "������� �����, �� ������������� ����� N, ������� ����� �����������: " << "\n";
	if (not(std::cin >> N) || (N < 0)) {
		std::cout << "��������� ������! ������ ����� �� �� ��������� �������. ������������� ���������!";
		return 1;
	}
	std::cout << "������������� ����� N: " <<"\n";
	RevPrint(N);
	return 0;
}