#pragma once
#include"mwindows.h"
string printUserName() {
    string strInputUserName = "";
    unsigned char ucLetter;// nhan gia tri am
    while (true) {
        ucLetter = _getch();
        if (ucLetter == 13) {//enter
            break;
        }
        else if (ucLetter == 8) {//backspace
            if (!strInputUserName.empty()) {
                strInputUserName.pop_back();//xoa 1 phan tu container vector, list, stack, queue
                cout << "\b \b";
            }
        }
        else if (ucLetter == 32) {//spacebar
        }
        else if (isprint(ucLetter)) { // cac ky tu in duoc
            strInputUserName += ucLetter;
            cout << ucLetter;
        }
    }
    return strInputUserName;
}
string printAsterisk() {
    string strInputPassWord = "";
    unsigned char ucLetter;// nhan gia tri am
    while (true) {
        ucLetter = _getch();
        if (ucLetter == 13) {//enter
            break;
        }
        else if (ucLetter == 8) {//backspace
            if (!strInputPassWord.empty()) {
                strInputPassWord.pop_back();//xoa 1 phan tu container vector, list, stack, queue
                cout << "\b \b";
            }
        }
        else if (ucLetter == 32) {
        }
        else if (isprint(ucLetter)) { // cac ky tu in duoc
            strInputPassWord += ucLetter;
            cout << '*';
        }
    }
    return strInputPassWord;
}
void AdminFunctionMenu() {
    Administrator admin;
    Menu out;
    int ichoice;
    string _strUserName;

    while (true) {
        out.printAdminFunc();
        cin >> ichoice;
        cin.ignore();

        switch (ichoice) {
        case 1: {
            system("cls");
            cout << "Employee'Name : ";
            _strUserName = printUserName();
            admin.addEmp(_strUserName);
            system("pause");
            break;
        }
        case 2: {
            system("cls");
            cout << "Employee'Name : ";
            getline(cin, _strUserName);
            admin.removeEmp(_strUserName);
            system("pause");
            break;
        }
        case 3: {
            system("cls");
            cout << "Employee'Name : ";
            getline(cin, _strUserName);
            admin.searchEmp(_strUserName);
            system("pause");
            break;
        }
        case 4: {
            system("cls");
            cout << "Employee'Name : ";
            getline(cin, _strUserName);
            admin.updateEmp(_strUserName);
            system("pause");
            break;
        }
        case 5: {
            system("cls");
            admin.showFullEmpInf();
            system("pause");
            break;
        }
        case 6: {
            return;
        }
        default: {
            setColor(RED);
            cout << "None Function!" << endl;
            break;
        }
        }
    }
}
void EmployeeFunctionMenu(Employee Employee) {
    Menu out;
    int choice;
    while (true) {
        out.printEmployeeFunc();
        cin >> choice;
        cin.ignore();
        switch (choice) {
        case 1: {
            system("cls");
            Employee.showInf();
            system("pause");
            break;
        }
        case 2: {
            system("cls");
            string strOldPassword, _strNewPassword, strConfirmPassword;

            cout << "CONFIRM OLD PASSWORD: ";
            strOldPassword = printAsterisk();

            if (strOldPassword != Employee.getPassWord()) {
                cout << "\nWRONG PASSWORD\n" << endl;
                system("pause");
                break;
            }

            cout << "\nEnter New Password: ";
            _strNewPassword = printAsterisk();

            cout << "\nCONFIRM NEW PASSWORD: ";
            strConfirmPassword = printAsterisk();

            if (_strNewPassword == strConfirmPassword) {
                Employee.changePassWord(_strNewPassword);
                setColor(LIGHT_GREEN);
                cout << "\nPassword Changed Successfully!\n" << endl;
                setColor(WHITE);
                system("pause");
            }
            else {
                setColor(RED);
                cout << "\nPassword Mismatch. Try Again!\n" << endl;
                setColor(WHITE);
                system("pause");
            }
            break;
        }
        case 3: {
            return;
        }
        default: {
            setColor(RED);
            cout << "\nNone Function!\n" << endl;
            break;
        }
        }
    }
}
