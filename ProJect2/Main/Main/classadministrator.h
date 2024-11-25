#include"classemployee.h"
#include <cstdio>// ham remove
class Administrator
{
	string strUserName;
	string strPassWord;
public:
	Administrator();
	Administrator(string , string );
	~Administrator();
	string getUserName();
	string getPassWord();
	void setUserName(string );
	void setPassWord(string );
	void inputAcc();
	void takeAcc(fstream& );
	void addEmp(string );
	void removeEmp(string );
	void searchEmp(string );
	void updateEmp(string );
	void showFullEmpInf();
	/*void Exit(); *///6
	bool checkAcc();
};