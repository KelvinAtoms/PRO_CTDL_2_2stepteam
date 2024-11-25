#pragma once
#include"menu.h"
void setColor(int _color) {
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, _color);
}
void gotoXY(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void Menu::printMain() { //Main login menu 
        system("cls"); //Xoa man hinh
        setColor(YELLOW);
        gotoXY(40, 2);
        for (int i = 0; i <= 20; i++) if (i != 20) cout << "*" << " "; else cout << "*\n";
        gotoXY(40, 3); cout << "*";
        setColor(GREEN);
        gotoXY(55, 3); cout << "DANG NHAP";
        setColor(YELLOW);
        gotoXY(80, 3); cout << "*";
        gotoXY(40, 4);
        for (int i = 0; i <= 20; i++) if (i != 20) cout << "*" << " "; else cout << "*\n";
        setColor(WHITE);
    }
void Menu::printLoginAdmin() { //Main login menu 
        system("cls"); //Xoa man hinh
        setColor(LIGHT_YELLOW);
        gotoXY(40, 2);
        for (int i = 0; i <= 20; i++) if (i != 20) cout << "*" << " "; else cout << "*\n";
        gotoXY(40, 3); cout << "*";
        setColor(LIGHT_GREEN);
        gotoXY(54, 3); cout << "DANG NHAP ADMIN";
        setColor(LIGHT_YELLOW);
        gotoXY(80, 3); cout << "*";
        gotoXY(40, 4);
        for (int i = 0; i <= 20; i++) if (i != 20) cout << "*" << " "; else cout << "*\n";
        setColor(WHITE);
    }
void Menu::printLoginEmployee() {
        system("cls");
        setColor(LIGHT_YELLOW);
        gotoXY(40, 2);
        for (int i = 0; i <= 20; i++)if (i != 20)cout << "*" << " "; else cout << "*\n";
        gotoXY(40, 3); cout << "*";
        setColor(LIGHT_GREEN);
        gotoXY(52, 3); cout << "DANG NHAP EMPLOYEE";
        setColor(LIGHT_YELLOW);
        gotoXY(80, 3); cout << "*\n";//40 1 
        gotoXY(40, 4);
        for (int i = 0; i <= 20; i++)if (i != 20)cout << "*" << " "; else cout << "*" << endl;
        setColor(WHITE);
    }
void Menu::printLoginUser() {
        setColor(GREEN);
        gotoXY(40, 6); cout << "User";
        setColor(WHITE);
        cout << ":"; gotoXY(50, 6);
    }
void Menu::printLoginPin() {
        setColor(GREEN);
        gotoXY(40, 7); cout << "Pin";
        setColor(WHITE);
        cout << ":"; gotoXY(50, 7);
    }
void Menu::printLoginPass() {
        setColor(GREEN);
        gotoXY(40, 7); cout << "Pass";
        setColor(WHITE);
        cout << ":"; gotoXY(50, 7);
    }
void Menu::printAdminFunc() {
        system("cls");
        setColor(LIGHT_YELLOW);
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
        cout << endl;
        cout << "Option: ";
        setColor(BRIGHT_WHITE);
    }
void Menu::printEmployeeFunc() {
        system("cls");
        setColor(LIGHT_YELLOW);
        gotoXY(40, 2);
        for (int i = 0; i < 14; i++) if (i == 6) cout << "*MENU EMPLOYEE"; else if (i >= 0 || i <= 10 || i != 5 || i != 6) cout << "* ";
        gotoXY(50, 3);  cout << "1. Xem thong tin tai khoan";
        gotoXY(50, 4);  cout << "2. Doi passsword";
        gotoXY(50, 5);  cout << "3. Thoat";
        gotoXY(40, 6);
        for (int i = 0; i < 20; i++)if (i == 9)cout << "**"; else if (i >= 0 || i <= 20 || i != 9 || i != 10)cout << "* ";
        cout << endl;
        cout << "Option: ";
        setColor(BRIGHT_WHITE);
    }