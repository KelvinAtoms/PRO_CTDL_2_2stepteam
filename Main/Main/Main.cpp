#include<iostream>
#include<windows.h>
#include<iomanip>
#include "mwindows.h"
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
		cout << left<<setw(40);
		for (int i = 0; i < 20; i++)if (i == 8)cout << "*MENU"; else if (i >= 0 || i <= 20 || i != 9||i!=10 )cout << "* ";
		cout << endl << setw(60) << "1. Them Employee";
		cout << endl << setw(60) << "2. Xoa Employee";
		cout << endl << setw(60) << "3. Tim Employee";
		cout << endl << setw(60) << "4. Cap nhat Employee";
		cout << endl << setw(60) << "5. Hien thi thong tin Employee";
		cout << endl << setw(60) << "6. Thoat!";
		
	}
};
int main() {
	menu k;
	k.printAF();
	cin.get();
}



