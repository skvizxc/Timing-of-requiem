#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <stdio.h> 
#include <conio.h>

void zxc() {

	setlocale(LC_ALL, "");
	system("cls");
	std::cout << "��� �� ��������� ������� ������� R: " << std::endl;
	int R;

	do
	{
		R = _getch();
		R = toupper(R);
	} while (R != 'R' && R != 'r');

}

void euls_scepter() {

	setlocale(LC_ALL, "");
	system("cls");
	std::cout << "��� �� ������� ���� � ���� ������� Z: " << std::endl;
	int Z;

	do
	{
		Z = _getch();
		Z = toupper(Z);
	} while (Z != 'Z' && Z != 'z');

	system("cls");
	std::wcout << L"�� ������� ���� � ����" << std::endl;
	bool played = PlaySound(TEXT("Eul_scepter.wav"), NULL, SND_ASYNC);
	Sleep(3000);
	system("cls");

}

void timing_requiem_of_souls() {

	setlocale(LC_ALL, "");
	system("cls");
	std::cout << "��� �� ������ ��������� Requiem of Souls ������� R: " << std::endl;
	int R;

	do
	{
		R = _getch();
		R = toupper(R);
	} while (R != 'R' && R != 'r');

	system("cls");
	bool played = PlaySound(TEXT("Requiem_of_souls.wav"), NULL, SND_ASYNC);
	Sleep(4500);


}

void rap() {

	setlocale(LC_ALL, "");
	system("cls");
	std::cout << "��� �� ������ ���� �������� ������� H: " << std::endl;
	int H;

	do
	{
		H = _getch();
		H = toupper(H);
	} while (H != 'H' && H != 'h');

	system("cls");
	bool played = PlaySound(TEXT("rap.wav"), NULL, SND_ASYNC);
	Sleep(6500);
	std::wcout << L"�� � �������� �������!" << std::endl << std::endl;
	Sleep(2500);
	system("cls");
	std::wcout << L"׸ �������?" << std::endl << std::endl;
	Sleep(2000);
	system("cls");
	std::wcout << L"� �� ��� 20-�� ���!" << std::endl << std::endl;
	Sleep(2500);
	system("cls");
	std::wcout << L"ZXC � � ����!" << std::endl << std::endl;
	Sleep(50000);

}

int main() {
	zxc();
	euls_scepter();
	timing_requiem_of_souls();
	rap();
	return 0;
}
