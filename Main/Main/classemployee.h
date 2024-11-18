#pragma once
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Employee
{
	string strUserName;
	string strPassWord;
	string strName;
	string strAddress;
	string strPhoneNumber;
	string strMail;
public:
	Employee() {
		strUserName = "N/A";
		strPassWord = "111111";
		strName = "N/A";
		strAddress = "N/A";
		strPhoneNumber = "N/A";
		strMail = "N/A";
	}
	Employee(string _strUserName,string _strPassWord,string _strName, string _strAddress, string _strPhoneNumber, string _strMail) {
		strUserName = _strUserName;
		strPassWord = _strPassWord;
		strName = _strName;
		strAddress = _strAddress;
		strPhoneNumber = _strPhoneNumber;
		strMail = _strMail;
	}
	~Employee() {
		strUserName = "N/A";
		strPassWord = "111111";
		strName = "N/A";
		strAddress = "N/A";
		strPhoneNumber = "N/A";
		strMail = "N/A";
	}
	void takeAcc() {
		getline(cin, strUserName);
		getline(cin, strPassWord);
	}
	void takeInf() {
		getline(cin, strName);
		getline(cin, strAddress);
		cin >> strPhoneNumber;
		cin >> strMail;
	}
	void showInf() {//goto
		cout << "1.Name : " << strName;
		cout << "\n2.Address : " << strAddress;
		cout << "\n3.PhoneNumber : " << strPhoneNumber;
		cout << "\n4.Mail : " << strMail;
	}
	void printAccInf() {
	
	}
	void changePW() {
		fstream file;
		file.open("Employees.txt");
		int n;
		file >> n;
		Employee* p = new Employee[n];
		while (!file.eof()) {
			
		}
		delete[]p;
		file.close();

	}
	void Exit();
};

