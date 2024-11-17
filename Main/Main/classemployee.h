#pragma once
#include<iostream>

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
	void checkInf();
	void changePW();
	void Exit();
};

