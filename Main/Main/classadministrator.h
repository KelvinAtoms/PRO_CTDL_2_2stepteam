#pragma once
#include<iostream>
#include<string>
#include<fstream>
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
	void takeAcc() {
		getline(cin, strUserName);
		getline(cin, strPassWord);
	}
	bool checkAcc(Administrator other) {
		return (strUserName == other.strUserName && strPassWord == other.strPassWord);
	}
	void addEmp();//1
	void removeEmp();//2
	void searchEmp();//3
	void updateEmp();//4
	void showInfEmp();//5
	void Exit();//6
	bool checkAcc() {//doi fn thanh 1 file luon ton tai
		fstream file;
		file.open("Administrators.txt",ios::in);
		Administrator temp;
		while (!file.eof()) {
			temp.takeAcc();
			if (checkAcc(temp)) {
				file.close();
				return true;
			}
		}
		file.close();
		return false;
	}
};



