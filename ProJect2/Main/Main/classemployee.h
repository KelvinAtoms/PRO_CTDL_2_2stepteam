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
	int iTimeLogin;
public:
	Employee();
	Employee(string , string , string , string , string , string , int );
	~Employee();
	string getUserName();
	string getPassWord();
	int getTimeLogin();
	void setUserName(string );
	void setPassWord(string );
	void setName(string );
	void setAddress(string );
	void setPhoneNumber(string );
	void setMail(string );
	void setTimeLogin(int );
	void inputInf();
	void takeAcc(fstream& );
	void takeInf(fstream& );
	bool takeFull();
	void showInf();
	void printInf(fstream& );
	void printAcc(fstream& );
	void changePassWord(string );
	bool checkUserName();
	bool checkAcc();
};