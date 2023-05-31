#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <stdio.h> 
#include <conio.h>

void zxc() {

	setlocale(LC_ALL, "");
	system("cls");
	std::cout << "Что бы затаймить реквием нажмите R: " << std::endl;
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
	std::cout << "Что бы поднять чела в еула нажмите Z: " << std::endl;
	int Z;

	do
	{
		Z = _getch();
		Z = toupper(Z);
	} while (Z != 'Z' && Z != 'z');

	system("cls");
	std::wcout << L"Вы подняли чела в еула" << std::endl;
	bool played = PlaySound(TEXT("Eul_scepter.wav"), NULL, SND_ASYNC);
	Sleep(3000);
	system("cls");

}

void timing_requiem_of_souls() {

	setlocale(LC_ALL, "");
	system("cls");
	std::cout << "Что бы начать кастовать Requiem of Souls нажмите R: " << std::endl;
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
	std::cout << "Что бы начать дико флексить нажмите H: " << std::endl;
	int H;

	do
	{
		H = _getch();
		H = toupper(H);
	} while (H != 'H' && H != 'h');

	system("cls");
	bool played = PlaySound(TEXT("rap.wav"), NULL, SND_ASYNC);
	Sleep(6500);
	std::wcout << L"Да я затаймил реквием!" << std::endl << std::endl;
	Sleep(2500);
	system("cls");
	std::wcout << L"Чё пиздели?" << std::endl << std::endl;
	Sleep(2000);
	system("cls");
	std::wcout << L"И на мне 20-ка душ!" << std::endl << std::endl;
	Sleep(2500);
	system("cls");
	std::wcout << L"ZXC я в деле!" << std::endl << std::endl;
	Sleep(50000);

}

int main() {
	zxc();
	euls_scepter();
	timing_requiem_of_souls();
	rap();
	return 0;
}
