//Header Libraries
#include "iostream"
#include "stdlib.h"
#include "conio.h"
//Custom Libraries
//#include "Fake_Main.h"

#include "UserName.h"
#include "Addons.h"
#include "Algorithms_Logics.h"
#include "WallGen.h"
//#include "ToAndFromDirector.h"
//#include "Program_Specific.h"
#include "windows.h"

using namespace std;
int UserName::LockScreen(string &Indicator,string &User,string &P_Mode,string WhichProgram,string ColorManager)
{
	Addons addons; WallGen wall; UserName login;
	Indicator = "Username Entry";
	string username="Default",password="Default";
	do
	{
		system("cls");
		login.header_wall1(User,"Lock Screen",Indicator,"4.0");
		if(Indicator == "Username Entry")
		{
			bool makeitrain;
			login.username_entry(username);
			makeitrain = login.lockscreen_director(username,Indicator,User);
			if(makeitrain == 1)
			{
				Indicator = "Password Entry";
				
			}
			
		}
		else if(Indicator == "Password Entry")
		{
			bool password_verification = 0;
			login.password_entry(password,username);			
			password_verification = login.password_database(username,password);
			if(password_verification == 0)
			{
				Indicator = "Username Entry";
			}
			else
			{
				cout << "Login Successful. ";
				login.userdetails_fetcher(username,User,Indicator);
				if(P_Mode == "Exit")
				{
					P_Mode = "Default";
				}
				cout << "User details fetched. Taking you to main program now"<<endl;
				username = "0";
				
			}
			
			
		}
	}
	while(username != "0");
	return 0;
}

void UserName::userdetails_fetcher(string username,string &User,string &Indicator)
{
	if((username == "dksoni411")||(username == "DKSONI411"))
	{
		User = "DK";
		Indicator = "Default";
	}
	else if((username == "lal")||(username == "Lal")||(username == "LAL"))
	{
		User = "Lal";
		Indicator = "Default";
	}
	else if((username == "admin")||(username == "Admin")||(username == "ADMIN"))
	{
		User = "Admin";
		Indicator = "Default";
	}
	else if((username == "simplified")||(username == "Simplified")||(username == "SIMPLIFIED"))
	{
		User = "Simplified";
		Indicator = "Simplified";
	}
	else if((username == "login")||(username == "Login")||(username == "LOGIN"))
	{
		User = "Admin";
		Indicator = "Simplified";
	}
	else if(username == "protocol")
	{
		User = "Batman";
		Indicator = "Batman";
	}
	else
	{
		cout << "You're using default values for logining"<<endl;
		Indicator = "Default";
	}
	
}



void UserName::random_tips()
{
	int a=1; Addons addons;
	a = addons.RNG_custom(6);
	cout << " |";
	if(a == 1)
	{
		cout << " (Enter Help to see instruction) ";
	}
	else if(a == 2)
	{
		cout << " (Enter x to bypass lockscreen) ";
	}
	else if(a == 3)
	{
		cout << " (Enter AdminPanel to access Admin Panel) ";
	}
	else if(a == 4)
	{
		
	}
	else if(a == 5)
	{
		cout << " (Enter Manual to see available accounts details) ";
	}
	else if(a == 5)
	{
		cout << " ;) ";
	}
	
	else 
	{
		cout << " (Random Tips will appear here) ";
	}
	
	
}




void UserName::username_entry(string &username)
{
	cout << "Enter Your username: "<<endl;
	cin >> username;
}

void UserName::password_entry(string &password,string username)
{
	WallGen wall; Addons addons;
	//cout << "Enter Your password: "<<endl;
	//cin >> password;
	
	
	string pass ="";
   char ch;
   cout << "Enter pass\n";
   ch = _getch();
   while((ch != 13)&&(ch != 27))//character 13 is enter Character 27 is Escape
   {
   	
   
   
	if((ch != 8)&&(ch != -32))
	{
		//cout << "You're inside of pushback"<<endl; system("pause");
	pass.push_back(ch);
    cout << '*';
	}
	ch = _getch();
    if((ch == 8)||(ch == -32))	//Character 8 is backspace
	{
		//cout << "You're inside of eraser"<<endl; system("pause");
		pass = ""; system("cls");
		wall.wall1();
		cout << "Login Screen (Enter Password) (Erase handler) | Trying to login as \""<<username<<"\""<<endl;
		wall.wall1();
	}
   }
   system("cls");
   password = pass;
//   cout << "Pass = "<<pass<<" | Password = "<<password<<endl;
   //cin >> pass;
   
	
}



int UserName::password_database(string username,string password)
{
	bool password_verification = 0;
	if(username == "dksoni411")
	{
		if(password == "dksoni@123")
		{
			password_verification = 1;
		}
		
	}
	else if(username == "DKSONI411")
	{
		if(password == "DKSONI @ 123")
		{
		password_verification = 1;
		}
	}
	else if((username == "admin")||(username == "Admin")||(username == "ADMIN"))
	{
		if(password == "0091")
		{
		password_verification = 1;
		}
	}
	else if((username == "lal")||(username == "Lal")||(username == "LAL"))
	{
		if(password == "Lal")
		{
		password_verification = 1;
		}
	}
	else if((username == "simplified")||(username == "Simplified")||(username == "SIMPLIFIED"))
	{
		if(password == "simplified")
		{
		password_verification = 1;
		}
	}
	else if((username == "login")||(username == "Login")||(username == "LOGIN"))
	{
		if(password == "x")
		{
		password_verification = 1;
		}
	}
	else if((username == "protocol"))
	{
		if(password == "10")
		{
		password_verification = 1;
		}
	}
	else if((username == "groot"))
	{
		if(password == "groot")
		{
		password_verification = 1;
		}
	}
	else
	{
		password_verification = 0;
	}
	return password_verification;
}


int UserName::lockscreen_director(string username,string Indicator,string User)
{
	UserName login; Addons addons; bool makeitrain = 0;
	if((username == "adminpanel")||(username == "Adminpanel")||(username == "AdminPanel")||(username == "ADMINPANEL"))
	{
		
		//TO.Admin_Panel(User,P_Mode,Indicator,ColorManager);
	}
	else if((username == "manual")||(username == "Manual")||(username == "MANUAL"))
	{
		
		login.Passwords(User,Indicator);
	}
	else if((username == "fuck")||(username == "Fuck")||(username == "FUCK"))
	{
		cout << "Unfortunately, this username isn't allowed and available. (Watch your language boy)"<<endl;
		system("pause");
	}
	else if((username == "help")||(username == "Help")||(username == "HELP"))
	{
		addons.Help_Starter(User,Indicator,"LockScreen");
		
	}
	else if((username == "0")||(username == "exit")||(username == "Exit")||(username == "EXIT"))
	{
		username = "0";
		//To Quit the program
	
	//	Indicator = "1stRun";
	}
	//For QuickAccessing to fake main panel
	else if((username == "0000")||(username == "0091")||(username == "0001")||
	(username == "x")||(username == "X")
	)
	{
		//To Quit the program
	//	flowcontroller="FinalBus";
	}
	
	else if((username == "AccessHidden"))
	{
		
		system("cls");
		if(User == "DK")
		{
		login.User_NamesC(Indicator,User);
		}
	}
	else
	{
		makeitrain = 1;
	}	
	return makeitrain;
}





/*
int UserName::QLockScreen(string &Indicator,string &User,string P_Mode,string WhichProgram,string ColorManager)
{
	//Classes Declarations
	WallGen wall; Addons addons; UserName login; 
	//Fake_Main faker; 
	Algorithms_Logics ALG;
	//Variables for Countring Invalid Inputs
	char invalid_input_break_authorized;
	int invalid_input_counter=0;
	//Initializations for these values
	invalid_input_break_authorized='n';
	string program_choice="Default",flowcontroller="1stStep",Authorization="Default";
	//User Login Variables
	string username="Default",password,
	username_verification,
	password_verification;
	do
	{
		system("cls");
		wall.small_wall(); wall.wall1();
		cout << "Lock Screen ";
		//User Conditions
		if(User == "DK")
		{
		cout << "| V 3.4 | "; addons.Greeter(User);cout<<" "; 
		}
		if((username != "Default")&&(flowcontroller == "passwordentry"))
		{
		cout << "| Trying to log in as \""<<username<<"\"";
		}
		else
		{
			login.random_tips();
		}
		if(Authorization == "Verified")
			{ 	
			if(User != "DK")
			{
				cout << "| ";
				addons.Greeter(username);
			}	
		}
		//User Conditions
		cout<<endl;
		wall.small_wall(); wall.wall1();
		//Username Entry Panel
		if(flowcontroller == "1stStep")
		{
		login.username_entry(program_choice);
		login.lockscreen_director(program_choice,User,username,flowcontroller,Indicator,P_Mode,WhichProgram,ColorManager);
		}
		
		else if(flowcontroller == "passwordentry")
		{
		//Password Entry Panel
		login.password_entry(password,username);
		login.password_director(program_choice,User,username,password,flowcontroller,Authorization);
			if(password=="0")
			{
				flowcontroller="1stStep";
			}
		}
		else if(flowcontroller == "FinalBus")
		{
			int a;
			
			if(Authorization == "Verified")
			{
				
				
				cout << "Login Successful. Now taking your arraning your program layout as per your configurations"<<endl;
				login.userdetails_fetcher(username,User,Indicator);
				Sleep(1000*1);
				
				if(User == "DK")
				{
					
					ALG.HashEdit_Detector(User,Indicator,username);
					
					if(Indicator == "ChangeinDKDetected")
					{
						system("cls");
					wall.header_wall1("Pirate","Pirate Detected","0","1.0");
					cout << "Hi! Genuis, Are you genius or just a pirate? Whatever, your access to this program is revoked."<<endl;
					cout << "You can login using other accounts but this account isn't gonna work for you"<<endl;
					Indicator = "Exit";
					system("pause");
					break;
					}
					else if(Indicator == "AskforPassword2")
					{
						system("cls");
						string password2; string post;
						wall.header_wall1(User,"Securit Check Post","(This is a security situtation)","1.0");
						cout << "Enter your 2nd password please"<<endl;
						cin >> password2;
						post = ALG.CheckPost;
						if(password2 != post)
						{
							Indicator = "Exit";
							break;
						}
						
					}
					
					
						Sleep(1000*2);
					
				}
			}
			else
			{
				cout << "You're being accepted with default values"<<endl;
				cout << "Login Successful"<<endl;
				if(Indicator == "1stRun")
				{
				Indicator = "Default";
				}
				if(User!="DK")
				{								
				Sleep(1000*1);
				}
			}
//			faker.Faker_Main(Indicator,gold_rate,silver_rate,User,Rate,P_Mode,Authorization,WhichProgram,ColorManager);
			program_choice = "0";
		
		}
		else if(flowcontroller == "repassword")
		{
			if(invalid_input_counter == 6)
			{
				cout << "Too many wrong attempts to login are detected. Program will now teminate"<<endl;
				program_choice="0";
				if(User!="DK")
				{								
				Sleep(1000*3);
				Indicator = "Exit";
				}	
			}
			else
			{
				if(User != "DK")
				{
			invalid_input_counter++;
			cout << "Your entered details are incorrect. Please try entering correct details"<<endl;
				}
				if(User!="DK")
				{								
				
				Sleep(1000*0.5);
				}
			flowcontroller = "1stStep";
			}
		}
		
	}
	while(program_choice!="0");
	
	
	return 0;
}


void UserName::lockscreen_director(string &program_choice,string User,string &username,string &flowcontroller,string &Indicator,string P_Mode,string WhichProgram,string ColorManager)
{
	//ToAndFromDirector TO; Program_Generator PG; 
	UserName login; //Program_Specific PS; 
	Addons addons;
	if((program_choice == "changelog"))
	{
		cout << "To avoid inconsistencies in program this section access is removed from login screen"<<endl;
		cout << "But you can still access this from Admin Panel. You can access admin panel from lock screen easily by entering \"AdminPanel\""<<endl;
		system("pause");
	}
//	else if((program_choice == "programgenerator")||(program_choice == "Programgenerator")||(program_choice == "ProgramGenerator")||
//	(program_choice == "PROGRAMGENERATOR")
//	)
//	{
	//	PG.Generator(Rate,gold_rate,silver_rate,Indicator,User,P_Mode,WhichProgram,ColorManager);
//	}
	else if((program_choice == "adminpanel")||(program_choice == "Adminpanel")||(program_choice == "AdminPanel")||(program_choice == "ADMINPANEL"))
	{
		cout << "Inside of Admin Panel"<<endl;
		system("pause");
		//TO.Admin_Panel(User,P_Mode,Indicator,ColorManager);
	}
	else if((program_choice == "manual")||(program_choice == "Manual")||(program_choice == "MANUAL"))
	{
		
		login.Passwords(User,Indicator);
	}
	else if((program_choice == "fuck")||(program_choice == "Fuck")||(program_choice == "FUCK"))
	{
		cout << "Unfortunately, this username isn't allowed and available. (Watch your language boy)"<<endl;
		system("pause");
	}
	else if((program_choice == "help")||(program_choice == "Help")||(program_choice == "HELP"))
	{
		addons.Help_Starter(User,Indicator,"LockScreen");
		
	}
	else if((program_choice == "0")||(program_choice == "exit")||(program_choice == "Exit")||(program_choice == "EXIT"))
	{
		program_choice = "0";
		//To Quit the program
		flowcontroller="Exit";
		Indicator = "1stRun";
	}
	//For QuickAccessing to fake main panel
	else if((program_choice == "0000")||(program_choice == "0091")||(program_choice == "0001")||
	(program_choice == "x")||(program_choice == "X")
	)
	{
		//To Quit the program
		flowcontroller="FinalBus";
	}
	
	else if((program_choice == "AccessHidden"))
	{
		
		system("cls");
		if(User == "DK")
		{
		login.User_NamesC(Indicator,User);
		}
	}
	else
	{
		username=program_choice;
		flowcontroller="passwordentry";
	}
}

void UserName::password_director(string program_choice,string User,string username,string password,string &flowcontroller,string &Authorization)
{
	
	UserName login;
	
	string fetched_password="NotAvailable";
	//Fetch Database in Secure World
	login.password_database(username,password,fetched_password);
	if(password == fetched_password)
	{
		
		flowcontroller = "FinalBus";
		Authorization = "Verified";
	}
	else
	{
		
		
		flowcontroller = "repassword";
		Authorization = "NotVerified";
	}
	
}

















//Common User Passwords


















//<==================== Changeslogs ================================
void UserName::old_User_NamesC(string Indicator,string User,float Rate)
{
	WallGen wall;
	Addons addons;
	wall.wall1();
	wall.wall2();
	addons.VD_System("1.0");
	cout<<"Intial Release"<<endl;
	addons.VD_System("1.2");
	cout<<"1: Added default user name and password as admin"<<endl;
	cout<<"2: Added Support for Indicator system"<<endl;
	cout<<"3: Added some more user names"<<endl;
	cout<<"4: "<<endl;
	addons.VD_System("1.5");
	cout << "1: Added a manual for login screen"<<endl;
	cout << "2: Upgraded manual with more username and guide on how to use login screen"<<endl;
	cout << "3: Template upgrades for login screen"<<endl;
	cout << "4: Added options to use mobile number as username"<<endl;
	cout << "5: Cleaned and optimized login screen layout"<<endl;
	cout << "6: Many more upgrades which I just don't remember because this section was added very lately"<<endl;
	addons.VD_System("2.0");
	cout << "1: Algorithm upgrades for login screen"<<endl;
	cout << "2: Made login screen more stable"<<endl;
	cout << "3: Added frequent direct access to manual"<<endl;
	cout << "4: Now you can access login screen directly from manual"<<endl;
	cout << "5: Added a lot of new username and passwords in manual"<<endl;
	addons.VD_System("2.5");
	cout << "1: Beginning from 2.5 added this changelog section"<<endl;
	cout << "2: Added ability to access this section only from Login screen (Can't say if I can make an hidden access panel to acces all changelogs)"<<endl;
	cout << "3: Added support for multiuser functions (still won't be useful for common user)"<<endl;
	cout << "4: Fixed some small bugs that might cause problems"<<endl;
	cout << "5: Fixed a problem due to which user wasn't changing while quickly logining as member \"X\" but MasterX will still take advantage of this bug"<<endl;
	cout << "6: Reason for keeping MaterX is simple, you want to keep signed in as last logged user"<<endl;
	addons.VD_System("2.6");
	cout << "1: Last update for this component, and this will block common users from seeing this panel (Yep you read right) "<<endl;
	cout << "2: Added changelog starting instructions"<<endl;
	cout << "3: Added rate entry panel access instructions"<<endl;
	cout << "4: Added instructions to start Expenditures calculator with yearly accomodation expensive entry"<<endl;
	addons.VD_System("3.0");
	cout << "1: Added instruction about starting expenditures calculator to take weekly values of University, accomodation etc " <<endl;
	cout << "2: Added instruction about starting expenditures calculator to take monthy values of University, accomodation etc " <<endl;
	cout << "3: Added instruction about starting expenditures calculator to take yearly values of University, accomodation etc " <<endl;
	cout << "4: Added ability to see full manual when it is called from PG. For that you need to enter manual on manual (which shows only magic word)"<<endl;
	addons.VD_System("4.0");
	cout << "1: Added Instruction about starting Admin Panel"<<endl;
	cout << "Same version is displayed for both login screen and manual, even if changes occur only on one section"<<endl;
	addons.VD_System("4.1");
	cout << "1: Removed access to changelog panel"<<endl;
	addons.VD_System("4.2");
	cout << "Moved Manual to Program Specific, So, it can avoid manual overwritten while copying a module for upgrading purpose"<<endl;
	addons.VD_System("5.0");
	cout << "1: Added a retry detection system to prevent invalid attempts of logining without providing right details"<<endl;
	cout << "2: This system will be officially called as Invali1d login detection system. All details are in manual"<<endl;
	addons.VD_System("5.1");
	cout << "1: Name of login screen will be displayed for all users"<<endl;
	addons.VD_System("5.2");
	cout << "1: Added some respect for developer, yeah me"<<endl;
	cout << "2: Fixed the issue which won't let login screen show it's name and layout when the warning about wrong info is given"<<endl;
	addons.VD_System("5.3");
	cout << "1: Removed changelog header file as it was useless and useless here"<<endl;
	addons.VD_System("5.4");
	cout << "1: Added greeting system to Lock Screen"<<endl;
	addons.VD_System("5.5");
	cout << "1: Added which Program functionality as a future backup"<<endl;
	addons.VD_System("5.6");
	cout << "1: Added Lal username (It was for SAM but implementing program-wide)"<<endl;
	addons.VD_System("6.0");
	cout << "1: Implemented the new login scheme. Now every user logged in is recognized differently"<<endl;
	cout << "2: Above is the most important addition which I should have a long time ago but never had that thought"<<endl;
	cout << "3: Now I must work on this login screen with new base ideas because I developed it almost 6 months ago when I had very limited knowledge"<<endl;
	cout << "4: I still have not so enough knowledge but I think new login screen will be great"<<endl;
	addons.VD_System("7.0");
	cout << "1: Added Seprate Password Database from login screen to make it more simpler and easier to manage"<<endl;
	cout << "2: Removed goto system from Lock Screen as it (might or can) create problems in future upgrades"<<endl;
	cout << "3: Fixes for Password entry section. Completely removed goto from whole program"<<endl;
	addons.VD_System("7.1");
	cout << "1: Program will shutdown when 2 wrong entries (5 attempts = each entry) are done"<<endl;
	cout << "2: Either you're first warned in password or username entry it is counted"<<endl;
	cout << "I always tried to add this from beginning and now I added this "<<endl;
	addons.VD_System("7.2");
	cout << "1: Fixed login screen bug which won't let program to turn off"<<endl;
	addons.VD_System("7.3");
	cout << "1: Removed that wall which was shown when program is turned off"<<endl;
	addons.VD_System("7.4");
	cout << "1: Added some more respect for me while username is entered"<<endl;
	
	wall.wall1();
	wall.wall2();
	
	addons.Contin();
}



*/
void UserName::User_NamesC(string Indicator,string User)
{
	WallGen wall;
	Addons addons;
	wall.wall1();
	cout << "Changelog Panel for Lock Screen";
	cout << endl;
	wall.wall2();
	addons.VD_System("1.0");
	cout<<"Intial Release"<<endl;
	cout << "Rebuilt from scratch with new idea of algorithms "<<endl;
	cout << "I'm sure this will make a difference"<<endl;
	addons.VD_System("2.0");
	cout << "1: Fixed bug which won't let program exit after too many wrong inputs"<<endl;	
	cout << "2: Some backend optimizations for speeding lockscreen along quality improvements"<<endl;
	cout << "3: Fixed some bugs found in previous versions"<<endl;
	cout << "4: Upgrades for inputs method"<<endl;
	cout << "5: Okay enough as only you can access this, rebased lockscreen from scratch"<<endl;
	cout << "6: Now things are more sorted, algorithms are more advanced and fixed to be ready to adopt future upgrades"<<endl;
	cout << "7: Fixed a big vulnerability which caused someone to login as any user if his username is entered then quick access is used"<<endl;
	cout << "8: Added Access to Manual"<<endl;
	cout << "9: Added Access to Admin Panel, finally"<<endl;
	addons.VD_System("2.1");
	cout << "1: Fixed bug which won't let \"logining as\" text to go away after invalid password entry"<<endl;
	cout << "2: Added changelog access handler to address about accessing the changelog"<<endl;
	cout << "3: Added visual 2 seconds delay after successful account authentication to make it look more better"<<endl;
	addons.VD_System("2.2");
	cout << "1: Added More modularizations"<<endl;
	cout << "2: Removed useless variables etc rates,Authorization"<<endl;
	addons.VD_System("2.3");
	cout << "1: Added quotes arround logining as user"<<endl;
	cout << "2: Program will welcome in a more better way when login is successful"<<endl;
	addons.VD_System("3.0");
	cout << "1: Beginning from 3.0, password input only be shown as * on-screen"<<endl;
	cout << "2: Added instructions to login as default user at username entry"<<endl;	
	addons.VD_System("3.1");
	cout << "1: Handled the backspace issue with password entry"<<endl;
	cout << "2: If you entered anything wrong just press backspace and re-enter your password (can't add single character erasing functionality for now)"<<endl;
	cout << "3: Addition of random tips system. Which will show tips near lockscreen title randomly"<<endl;
	addons.VD_System("3.2");
	cout << "1; Added login x username and password"<<endl;
	cout << "2: fixed delay for my account name"<<endl;
	addons.VD_System("3.3");
	cout << "1: Fixed a bug where ICED wasn't able to terminate program when user was previously logged in"<<endl;
	addons.VD_System("3.4");
	cout << "1: Fixed a bug which caused bootloop to program when tried to quit program lockscreen using \"Exit\" command"<<endl;
	cout << "2: Major security upgrade. Added a program to detect if username was changed using any hashediter or debugger"<<endl;
	wall.wall1();
	wall.wall2();	
	addons.Contin();
	
}
//----------------------------------------------------------------->

void UserName::header_wall1(string User,string program_name,string Indicator,string program_version)
{
WallGen wall;
Addons addons;
wall.wall1();
UserName login;
cout << program_name << " | ";
if((User == "DK")&&(program_version != "0"))
{
	cout << "V " << program_version << " | ";
}
if((Indicator != "Default")&&(Indicator != "0")&&(Indicator != "1stRun"))
{
	cout << Indicator << " | ";
}

addons.Greeter(User);
login.random_tips();
cout << endl;
wall.wall1();

}
void UserName::Passwords(string User,string Indicator)
{
WallGen wall;
	Addons addons;
	UserName Users; //Program_Specific PS;
	system("cls");

		
	cout<<"------------- Manual";
	if((User=="DK")||(User=="Dhanesh"))
	{
	cout<<" (V 4.0)";
	}
	wall.small_wal1();		
	cout<<"Here are some username and passwords (With common variations)"<<endl;
	wall.wall1(); 
	
	//PS.given_usernames(User,Indicator);
	
	wall.wall1(); 
	wall.wall1();
	addons.Contin();
		
	
	
}
