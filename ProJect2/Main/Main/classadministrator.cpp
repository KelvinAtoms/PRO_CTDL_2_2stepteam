#pragma once
#include"classadministrator.h"
Administrator::Administrator() {
	strUserName = "N/A";
	strPassWord = "111111";
}
Administrator::Administrator(string _strUserName, string _strPassWord) {//todo lay user va pass tu txt
	strUserName = _strUserName;
	strPassWord = _strPassWord;
}
Administrator::~Administrator() {
	strUserName = "N/A";
	strPassWord = "111111";
}
string Administrator::getUserName() {
	return strUserName;
}
string Administrator::getPassWord() {
	return strPassWord;
}
void Administrator::setUserName(string _strUserName) {
	strUserName = _strUserName;
}
void Administrator::setPassWord(string _strPassWord) {
	strPassWord = _strPassWord;
}
void Administrator::inputAcc() {// input from keybroad todo fuse menu.h
	cout << "\nUserName: "; getline(cin, strUserName);
	cout << "\nPassWord: "; getline(cin, strPassWord);
}
void Administrator::takeAcc(fstream& file) {//#
	getline(file, strUserName);
	getline(file, strPassWord);
}
void Administrator::addEmp(string _strUserName) {//1
	Employee employee;
	employee.setUserName(_strUserName);
	if (employee.checkUserName()) {
		cout << "\nExist User\n"; return;
	}
	cout << "\nStar Edit Employee";
	employee.takeFull();
	fstream file;
	file.open("Employees.txt", ios::in);
	int iSize = 0;
	Employee EmployeeList[50];
	while (!file.eof()) {
		EmployeeList[iSize++].takeAcc(file);
	}
	iSize--;
	file.close();
	file.open("Employees.txt", ios::app);
	employee.printAcc(file);
	file.close();
	file.open(employee.getUserName() + ".txt", ios::out);
	employee.inputInf();
	employee.printInf(file);
	file.close();
	cout << "\nEdit Success\n";
}
void Administrator::removeEmp(string _strUserName) {//2
	Employee employee;
	employee.setUserName(_strUserName);
	if (!employee.checkUserName()) {
		cout << "\nNone Exist User\n"; return;
	}
	employee.takeFull();
	fstream file;
	file.open("Employees.txt", ios::in);
	int iSize = 0;
	Employee EmployeeList[50];
	while (!file.eof()) {
		/*if (file.eof())break; */
		EmployeeList[iSize++].takeAcc(file);
	}
	iSize--;
	file.close();
	for (int iCount = 0; iCount < iSize; iCount++) {
		if (EmployeeList[iCount].getUserName() == employee.getUserName()) {
			for (int jCount = iCount; jCount < iSize - 1; jCount++)EmployeeList[jCount] = EmployeeList[jCount + 1];
			iSize--;
			break;
		}
	}
	remove((_strUserName + ".txt").c_str());//chuyen string->const char*?
	file.open("Employees.txt", ios::out);
	for (int iCount = 0; iCount < iSize; iCount++)EmployeeList[iCount].printAcc(file);
	file.close();
	cout << "\nRemove Success\n";
}
void Administrator::searchEmp(string _strUserName) {//3 tim theo UserName 
	Employee employee;
	employee.setUserName(_strUserName);
	if (!employee.checkUserName()) {
		cout << "\nNone Exist User\n"; return;
	}
	cout << "\nUserName Exist";
	employee.takeFull();
	employee.showInf();
}
void Administrator::updateEmp(string _strUserName) {//4
	Employee employee;
	employee.setUserName(_strUserName);
	if (!employee.checkUserName()) {
		cout << "\nNone Exist User\n"; return;
	}
	cout << "\nUserName Exist";
	employee.takeFull();
	employee.showInf();
	int iChoice;//choice
	string _strTemp;
	cout << "\nInformation need to change is: ";
	cin >> iChoice;
	cin.ignore();
	cout << "\nChange into: ";
	getline(cin, _strTemp);
	switch (iChoice) {
	case 1: employee.setName(_strTemp); break;
	case 2: employee.setAddress(_strTemp); break;
	case 3: employee.setPhoneNumber(_strTemp); break;
	case 4: employee.setMail(_strTemp); break;
	default: break;
	}
	fstream file;
	file.open(_strUserName + ".txt", ios::out | ios::trunc);
	employee.printInf(file);
	file.close();
	cout << "\nEdit Succes\n";
}
void Administrator::showFullEmpInf() {//5
	fstream file;
	file.open("Employees.txt", ios::in);
	int iSize = 0;
	Employee EmployeeList[50];
	while (!file.eof()) {
		/*if (file.eof())break; */
		EmployeeList[iSize++].takeAcc(file);
	}
	iSize--;
	file.close();
	for (int i = 0; i < iSize; i++) {
		file.open(EmployeeList[i].getUserName() + ".txt", ios::in);
		EmployeeList[i].takeInf(file);
		file.close();//p[i].takeFull();
	}
	for (int iCount = 0; iCount < iSize; iCount++) {
		cout << "\nEmployee[" << iCount + 1 << "]:";
		EmployeeList[iCount].showInf();
	}
}
/*void Exit(); *///6
bool Administrator::checkAcc() {//doi fn thanh 1 file luon ton tai
	fstream file;
	file.open("Administrators.txt", ios::in);
	Administrator adminTemporary;
	while (!file.eof()) {
		adminTemporary.takeAcc(file);
		if (adminTemporary.strUserName == strUserName && adminTemporary.strPassWord == strPassWord) {
			file.close();
			return true;
		}
	}
	file.close();
	return false;
}