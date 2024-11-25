#pragma once
#include"classemployee.h"
Employee::Employee() {
		strUserName = "N/A";
		strPassWord = "111111";// 7 time 1
		strName = "N/A";
		strAddress = "N/A";
		strPhoneNumber = "N/A";
		strMail = "N/A";
		iTimeLogin = 0;
	}
Employee::Employee(string _strUserName, string _strPassWord, string _strName, string _strAddress, string _strPhoneNumber, string _strMail, int _iTimeLogin) {
		strUserName = _strUserName;
		strPassWord = _strPassWord;
		strName = _strName;
		strAddress = _strAddress;
		strPhoneNumber = _strPhoneNumber;
		strMail = _strMail;
		iTimeLogin = _iTimeLogin;
	}
Employee::~Employee() {
		strUserName = "N/A";
		strPassWord = "111111";
		strName = "N/A";
		strAddress = "N/A";
		strPhoneNumber = "N/A";
		strMail = "N/A";
		iTimeLogin = 0;
	}
string Employee::getUserName() {
		return strUserName;
	}
string Employee::getPassWord() {
		return strPassWord;
	}
int Employee::getTimeLogin() {
		return iTimeLogin;
	}
void Employee::setUserName(string _strUserName) {
		strUserName = _strUserName;
	}
void Employee::setPassWord(string _strPassWord) {
		strPassWord = _strPassWord;
	}
void Employee::setName(string _strName) {
		strName = _strName;
	}
void Employee::setAddress(string _strAddress) {
		strAddress = _strAddress;
	}
void Employee::setPhoneNumber(string _strPhoneNumber) {
		strPhoneNumber = _strPhoneNumber;
	}
void Employee::setMail(string _strMail) {
		strMail = _strMail;
	}
void Employee::setTimeLogin(int _iTimeLogin) {
		iTimeLogin = _iTimeLogin;
	}
void Employee::inputInf() {//input from keybroad todo fuse menu.h #
		cout << "\nName       : "; getline(cin, strName);//getlien nhan enter de ket thuc
		cout << "Address    : "; getline(cin, strAddress);
		cout << "PhoneNumber: "; getline(cin, strPhoneNumber);
		cout << "Mail       : "; getline(cin, strMail);
	}
void Employee::takeAcc(fstream& file) {//take from file
		file >> strUserName;
		file >> strPassWord;
		file >> iTimeLogin;
	}
void Employee::takeInf(fstream& file) {// take from file
		getline(file, strName);
		getline(file, strAddress);
		getline(file, strPhoneNumber);
		getline(file, strMail);
	}
bool Employee::takeFull() {//use file to check and take Inf base UserName  <change name to check full> #
		fstream file;
		file.open("Employees.txt", ios::in);
		int iSize = 0;
		Employee EmployeeList[50];
		while (!file.eof()) {
			EmployeeList[iSize].takeAcc(file);
			if (EmployeeList[iSize].strUserName == strUserName)*this = EmployeeList[iSize];
			iSize++;
		}
		iSize--;
		file.close();
		for (int iCount = 0; iCount < iSize; iCount++) {
			if (EmployeeList[iCount].strUserName == strUserName) {
				file.open(strUserName + ".txt", ios::in);
				takeInf(file);
				file.close();
				return true;
			}
		}
		return false;
	}
void Employee::showInf() {//1  show to menu 
		cout << "\n1.Name        : " << strName;
		cout << "\n2.Address     : " << strAddress;
		cout << "\n3.PhoneNumber : " << strPhoneNumber;
		cout << "\n4.Mail        : " << strMail << endl;;
	}
void Employee::printInf(fstream& file) {// print to file
		file << strName << endl;
		file << strAddress << endl;
		file << strPhoneNumber << endl;
		file << strMail << endl;
	}
void Employee::printAcc(fstream& file) {//print to file
		file << strUserName << endl;
		file << strPassWord << " " << iTimeLogin << endl;
	}
void Employee::changePassWord(string _strPassWord) {//2 #
		if (!takeFull()) { cout << "\nNone Exist User"; return; }
		fstream file;
		file.open("Employees.txt", ios::in);
		int iSize = 0;
		Employee EmployeeList[50];
		while (!file.eof()) {
			EmployeeList[iSize].takeAcc(file);
			if (EmployeeList[iSize].strUserName == strUserName) {
				EmployeeList[iSize].setPassWord(_strPassWord);
				setPassWord(_strPassWord);
				EmployeeList[iSize].setTimeLogin(1);
			}
			iSize++;
		}
		iSize--;
		file.close();
		file.open("Employees.txt", ios::out | ios::trunc);
		for (int iCount = 0; iCount < iSize; iCount++) {
			EmployeeList[iCount].printAcc(file);
		}
		file.close();
	}
bool Employee::checkUserName() {
		fstream file;
		file.open("Employees.txt", ios::in);
		Employee employee;
		while (!file.eof()) {
			employee.takeAcc(file);
			if (employee.strUserName == strUserName) {
				file.close();
				return true;
			}
		}
		file.close();
		return false;
	}
bool Employee::checkAcc() {
		fstream file;
		file.open("Employees.txt", ios::in);
		Employee employee;
		while (!file.eof()) {
			employee.takeAcc(file);
			if (employee.strUserName == strUserName && employee.strPassWord == strPassWord) {
				file.close();
				return true;
			}
		}
		file.close();
		return false;
	}