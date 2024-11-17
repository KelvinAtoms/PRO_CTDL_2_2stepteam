#pragma once
#include<iostream>

using namespace std;
class Administrator
{
	string strUserName;
	string strPassWord;
public:
	Administrator() {
		strUserName = "N/A";
		strPassWord = "111111";
	}
	Administrator(string _strUserName, string _strPassWord) {//todo lay user va pass tu txt
		strUserName = _strUserName;
		strPassWord = _strPassWord;
	}
	~Administrator() {
		strUserName = "N/A";
		strPassWord = "111111";
	}
	void addEmp();
	void removeEmp();
	void searchEmp();
	void updateEmp();
	void checkInfEmp();
	void Exit();
};



