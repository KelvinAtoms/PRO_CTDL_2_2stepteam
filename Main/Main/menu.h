#pragma once
#include<iostream>
#include<windows.h>
#include<iomanip>
#include "windows.h"
using namespace std;
class menu
{
public:
	void printMMenu() {
		system("cls");
		cout << "VAI TRO BAN LA:\n";
		cout << "1. Administrator\n";
		cout << "2. Employee";
	}
	void printMLA() {//Main login admin menu
		system("cls"); // Xóa màn hình
		cout << setw(40);
		for (int i = 0; i <= 20; i++)if (i != 20)cout << "*" << " "; else cout << "*\n";
		cout << setw(40) << "*" << setw(27) << "DANG NHAP ADMIN" << setw(14) << "*\n";
		cout << setw(40);
		for (int i = 0; i <= 20; i++)if (i != 20)cout << "*" << " "; else cout << "*\n";
	}
	void printMLE() {
		system("cls");
		cout << setw(40);
		for (int i = 0; i <= 20; i++)if (i != 20)cout << "*" << " "; else cout << "*\n";
		cout << setw(40) << "*" << setw(29) << "DANG NHAP EMPLOYEE" << setw(12) << "*\n";//40 1 
		cout << setw(40);
		for (int i = 0; i <= 20; i++)if (i != 20)cout << "*" << " "; else cout << "*" << endl;
	}
	void printML() {
		cout << setw(44) << "USER:";//gotoXY set pointer
		/*cout<<endl;
		cout << setw(44) << "Pin:";*/
	}
	void printAF() {
		system("cls");
		cout << setw(40);
		for (int i = 0; i <= 20; i++)if (i == 17)cout << "*MENU"; else if (i >= 0 || i <= 20 || i != 18 || i != 19 || i != 20||i!=21)cout << "* ";
	}
};

