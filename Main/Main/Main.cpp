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
    void printMLA() { //Main login menu 
        system("cls"); //Xoa man hinh
        gotoXY(40, 2);
        for (int i = 0; i <= 20; i++) if (i != 20) cout << "*" << " "; else cout << "*\n";
        gotoXY(40, 3); cout << "*";
        gotoXY(54, 3); cout << "DANG NHAP ADMIN";
        gotoXY(80, 3); cout << "*";
        gotoXY(40, 4);
        for (int i = 0; i <= 20; i++) if (i != 20) cout << "*" << " "; else cout << "*\n";
    }
    void printMLE() {
        system("cls");
        gotoXY(40, 2);
        for (int i = 0; i <= 20; i++)if (i != 20)cout << "*" << " "; else cout << "*\n";
        gotoXY(40, 3); cout << "*";
        gotoXY(52, 3); cout << "DANG NHAP EMPLOYEE";
        gotoXY(80, 3); cout << "*\n";//40 1 
        gotoXY(40, 4);
        for (int i = 0; i <= 20; i++)if (i != 20)cout << "*" << " "; else cout << "*" << endl;
    }
    void printML() {
        gotoXY(44, 6); cout << "USER:";//gotoXY 
        /*cout<<endl;
        cout << gotoXY()<< "Pin:";*/
    }
    void printAF() {
        system("cls");
        gotoXY(40, 2);
        for (int i = 0; i < 20; i++)if (i == 9)cout << "*MENU"; else if (i >= 0 || i <= 20 || i != 9 || i != 10)cout << "* ";
        gotoXY(50, 3); cout << "1. Them Employee";
        gotoXY(50, 4); cout << "2. Xoa Employee";
        gotoXY(50, 5); cout << "3. Tim Employee";
        gotoXY(50, 6); cout << "4. Cap nhat Employee";
        gotoXY(50, 7); cout << "5. Hien thi thong tin Employee";
        gotoXY(50, 8); cout << "6. Thoat!";
        gotoXY(40, 9);
        for (int i = 0; i < 20; i++)if (i == 9)cout << "**"; else if (i >= 0 || i <= 20 || i != 9 || i != 10)cout << "* ";
    }

}; 
int main() {
	menu k;
	k.printMLE();
	k.printMLA(); 
	
}



