#pragma once
#include"project2.h"
void runProject() {
	Menu out;
	Administrator admin;
	Employee _employee;
	string _strUserName;
	string _strPassWord;
	int iCount = 0;
	int iPassSize = 0;
	while (iCount < 3) {
		out.printMain();
		out.printLoginUser();
		_strUserName = printUserName();
		out.printLoginPass();
		_strPassWord = printAsterisk();
		iPassSize = _strPassWord.size();
		admin.setUserName(_strUserName);
		admin.setPassWord(_strPassWord);
		if (!admin.checkAcc()) {
			_employee.setUserName(_strUserName);
			_employee.setPassWord(_strPassWord);
			if (!_employee.checkAcc()) {
				iCount++;
				setColor(RED);
				if (iCount != 1)cout << "\nWrong UserName or PassWord " << iCount << " times\n";
				else cout << "\nWrong UserName or PassWord " << iCount << " time\n";
				setColor(WHITE);
				system("pause");
				continue;
			}
			_employee.takeFull();
			out.printLoginEmployee();
			out.printLoginUser();
			cout << "UserName";
			out.printLoginPass();
			for (int iCountA = 0; iCountA < iPassSize; iCountA++)cout << "*";
			gotoXY(45, 9);
			system("pause");
			_employee.takeFull();
			if (_employee.getTimeLogin() == 0) {
				setColor(RED);
				cout << "\nCOMFIRM NEWPASSWORD WHEN FIRST LOGIN ";
				setColor(WHITE);
				_employee.changePassWord(printAsterisk());
				setColor(LIGHT_GREEN);
				cout << "\nSET PASSWORD SUCCESS\n";
				setColor(WHITE);
				system("pause");
			}
			EmployeeFunctionMenu(_employee);
			break;
		}
		out.printLoginAdmin();
		out.printLoginUser();
		cout << "Admin";
		out.printLoginPin();
		for (int iCountA = 0; iCountA < iPassSize; iCountA++)cout << "*";
		gotoXY(45, 9);
		system("pause");
		AdminFunctionMenu();
		break;
	}
}