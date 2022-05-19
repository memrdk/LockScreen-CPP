#ifndef USERNAME_H
#define USERNAME_H

#include "string"
using namespace std;

class UserName
{
	public:
		int LockScreen(string &Indicator,string &User,string &P_Mode,string WhichProgram,string ColorManager);
		int QLockScreen(string &Indicator,string &User,string P_Mode,string WhichProgram,string ColorManager);
		void Passwords(string User,string Indicator);
		void User_NamesC(string Indicator,string User);		
	protected:
		void header_wall1(string User,string program_name,string Indicator,string program_version);
		int lockscreen_director(string username,string Indicator,string User);
		void random_tips();
		void username_entry(string &username);
		void password_entry(string &password,string username);
		//int lockscreen_director(string &program_choice,string User,string &username,string &flowcontroller,string &Indicator,string P_Mode,string WhichProgram,string ColorManager);
		int password_database(string username,string password);
		void password_director(string program_choice,string User,string username,string password,string &flowcontroller,string &Authorization);
		void userdetails_fetcher(string username,string &User,string &Indicator);
	
	
		
		void old_User_NamesC(string Indicator,string User,float Rate);
		
};

#endif
