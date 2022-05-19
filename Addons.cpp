#include "iostream"
#include "stdlib.h"
#include "string"

//Classes
#include "Addons.h"
#include <ctime>

//#include <random>
#include "math.h"
#include <windows.h>
#include <cstdlib>
#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "Algorithms_Logics.h"
#include "WallGen.h"
//#include "ChangeLog.h"
#include "UserName.h"
//#include "Help.h"
//#include "Changelog_Databases.h"

WallGen wall;
Addons addons;
using namespace std;

void Addons::AtoZ_Printer(string User,string Indicator,char start,char end,string P_Mode)
{
	Addons addons; WallGen wall;
	char abcd; 
	system("cls");
	wall.header_wall1(User,"Character Value Table","0","1.0");
	if(P_Mode == "Simplified")
	{
		start = 'A';
		end = 'z';
	}
	for(abcd = start; abcd<=end;abcd++)
	{
		float a;
		a = abcd;
		cout << abcd << " ---- "<< a <<endl;
		
		
	}
	addons.Contin();
}

void Addons::Random_Colors(float &colorcode, string &ColorManager)
{
	 Algorithms_Logics ALG;
    colorcode = addons.RNG_custom(8);
	cout << "color code = "<<colorcode<<endl; 
	if(colorcode == 8)
	{
		colorcode = 9;
	}
	//ALG.ColorAlgorithm("Default","CodeGiven",colorcode,ColorManager);
}


void Addons::Delete_Facility(string User,string Indicator)
{
	string program_choice;
	if(Indicator == "Self_Delete_Allowed")
	{
		program_choice = "Marky.exe";
	}
	cout << "-------------------------- Available files ------------------------------"<<endl;
	system("dir");
	cout << "--------------------------------------------------------------------------"<<endl;
	cout << endl;
	cout << "Enter the name of file you want to delete"<<endl;
	cin >> program_choice;
	system(((("del ")+program_choice).c_str()));  
//	system(((settings+argv+("\"")).c_str()));  
}


int Addons::RNG_custom(unsigned range)
{
	
    return (rand()%range)+1;
}

void Addons::console_color_changer()
{
	//This color changing panel is not being used at the moment. So changes to here are wong
	WallGen wall; Addons addons;
	unsigned short i;
	wall.wall1();
	cout << "Console color changer | ";
	wall.wall1();
	cout << "Enter color code: "<<endl;
	cin >> i;
	if(i!=0)
	{
	addons.setcolor(i);
		
	}
	else
	{
		cout << "Invalid color code"<<endl;
	}	
	
}

void Addons::setcolor(unsigned short color)
{ 
if(color != 0)
{
 HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE); 
 SetConsoleTextAttribute(hCon,color); 
}
} 



void Addons::ADdons(string User,string Indicator)
{
	string program_choice="Default";
	while(program_choice!="0")
	{
		system("cls");
		wall.wall1(); 
		cout << "Addons Panel (Just for access to all generator) | "; addons.Greeter(User); 
		if(User=="DK")
		{
			cout << " | V 3.6";
		}
		cout << endl;
		wall.wall1();
		cout << "Where would you like to go. There are many things here to see. For example you can see all wall displayers, color changer etc"<<endl;
		cin >> program_choice;
		if(program_choice == "AccessHidden")
		{
			system("cls");
			if(User == "DK")
			{
			addons.AddonsC(User,Indicator);
			}
		}
		else
		{
			system("cls");
		}
		
		 
		
		
		
	}
}



int Addons::Contin() {
	string i;
	cout << "\nEnter any character to continue: " << endl;
	cin >> i;
	return 0;
}

int Addons::Continue() {
	string i;
	cout << "\nEnter any character to continue: " << endl;
	cin >> i;
	return 0;
}

int Addons::CONTINUE() {
	string i;
	cout << "\nEnter any character to continue: " << endl;
	cin >> i;
	system("cls");
	return 0;
}








//--------------> Version and Naming Display systems <-------------------
int Addons::VD_System(string VDS)
{
	cout<<"---------------------- V "<<VDS<<" ------------------------"<<endl;
}

int Addons::VD_System(float versions)
{
	cout<<"---------------------- V "<<versions<<".0 ------------------------"<<endl;
}



int Addons::ND_System(string NDS)
{
	cout<<"---------------------- "<<NDS<<" --------------------------"<<endl;
}


int Addons::VD_Systems(string VDS)
{
	WallGen wall;
	wall.wall();
	
	cout<<"====================== V "<<VDS<<"======================= ";
	wall.wall1();
}


int Addons::ND_Systems(string NDS)
{
	cout<<"======================= "<<NDS<<" ======================="<<endl;
}

int Addons::VD_Systems(float versions)
{
	WallGen wall;
	wall.wall();
	
	cout<<"====================== V "<<versions<<".0 ======================= ";
	wall.wall1();
}



//-------------------> This is end of Display Systems <---------------------






//<--------------------- Disclaimer ---------------
void Addons::Disclaimer(string User,string Indicator)
{
	string program_choice="Began";
	program_choice=User;
	if(User!="DK")
	{
		User="Yes";
	}
	do
	{
	wall.wall1();
	cout<<"Disclaimer Section"<<endl;
	wall.wall1();
	if(program_choice!="DK")
	{
		if((User == "yes")||(User == "Yes")||(User == "YES"))
		{
	cout << "Good day :="<<endl;
	cout << "In this program, I always strive my best to provide the best calculations and user experience. "<<endl;
	cout << "With all limited knowledge and resources, atleast today (05-Oct-2017), I always tried (and try) my best to make it quite secure, fast and reliable"<<endl;
	cout << "But as you know, there are always flaws in nearly all programs. Some bugs may exist without even making any signs of their presence"<<endl;
	cout << "Some humanly faults are also expected to happen with any program. Let's take an example in-case of Expenditures Calculator"<<endl;
	cout << "What I use for mostly monthly calculations is multiplaying weeky with 4 and also for taking some weekly calculations, I divide monthly by 4"<<endl;
	cout << "This, sometimes, may cause a bit wrong calculations. I am not saying it will create fully wrong calculations. What I'm trying to say it that"<<endl;
	cout << "this may create a daily calculation bit different than the calculation you may get by diving monthly calculation by 30 (or 31 days)"<<endl;
	cout << "So, what I am actually telling is that depending completely on calculation based on this program, sometimes, may not be a wise decision"<<endl;
	cout << "You may get a total expenditure, let's suppose, 1175.56 dollars, but they may charge you 1175.84 or 1174.64, or maybe more"<<endl;
	cout << "So, in this case, I ain't responsible for any misunderstandings happening due to bit different calculations system"<<endl;
	cout << "In all cases, all matters and due to any humanly mistake, I won't be responsible for any damage happening to you"<<endl;
	cout << "Always use this program on your own responsiblities. But you can always tell me about any bugs you find in this program by emailing me"<<endl;
	cout << "You can also give me your precious suggestions. So, I hope you understand it completely. contact mail = \"dksoni411@gmail.com\""<<endl;
	wall.wall1();
	cout << "If you're agree to whatever said above and whatever I forgot to mention, feel free to use, else quit program"<<endl;
	cin >> program_choice;
	
		}
		else
		{
			break;
		}
	}
	else
	{
		cout << "You're admin. You know every risk and rules. So, why you want to disclaimer. This is for new comers, right."<<endl;
		cout << "Anyways, if you still want to see disclaimer, enter \"yes\". (Enter \"0\" to exit)"<<endl;
		cin >> program_choice;
	

		User=program_choice;
		
	}
	system("cls");
	}
	while(program_choice!="0");
}






int Addons::Greeter(string User)
{
	if(User != "Default")
	{
	cout << "Welcome Mr. "<<User<<" | ";
	}
}

int Addons::Help_Starter(string User,string Indicator,string ProgChoice)
{
	Addons addons; WallGen wall; //Help help; 
	string program_choice="Default";
	do
	{
		system("cls");
		//help.HelpMe(User, Indicator, ProgChoice);
		cout << "Enter 0 to exit: "<<endl;
		cin >> program_choice;
		
		
		
		
	}
	while(program_choice != "0");
	return 0;
}

void Addons::Hidden_Panel(string User,string Indicator)
{
	WallGen wall;
	Addons addons;
	//ChangeLog change; Changelog_Databases CD;
	
	string program_choice;
	while(program_choice!="0")
{
	system("cls");
	wall.small_wall();
	cout<<" Welcome to Hidden Panel ";
	if(User=="DK")
	{	

	cout<<" (v 2.0) ";
	}
	wall.small_wall2();
	cout << "To \"C\" brief history of this panel            Enter \"1\"" << endl << endl;
	cout << "To see \"R\"iddle section of this panel         Enter \"2\"" << endl << endl;
	cout << "(Moved MyNotes and Secret Changelog access control to Admin Panel)"<<endl;
	if((User=="DK")||(User=="Dhanesh"))
	{
	
	}	
	wall.wall1();
	cin >> program_choice;
	system("cls");
	if ((program_choice == "c") || (program_choice == "C")||(program_choice=="1")||(program_choice=="History")||(program_choice=="history")||(program_choice=="HISTORY")||(program_choice=="h")||(program_choice=="H"))
	{
		//CD.Brief_History(User,Indicator);
	}
	else if ((program_choice == "R") || (program_choice == "r")||(program_choice=="2")||(program_choice=="Riddler")||(program_choice=="riddler")||(program_choice=="RIDDLER")||(program_choice=="riddle")||(program_choice=="RIDDLE")||(program_choice=="Riddle"))
	{

		addons.Riddler(User,Indicator);
	}
	
	else{

	}
}
}
void Addons::Riddler(string User,string Indicator)
{
		Addons addons;
	char answer;
	cout << "--------------- Welcome to riddles section ---------------" << endl;
	cout << "1: If 100 birds are sitting on a tree and you shoot two, How many will remain there: " << endl;
	cout << "Your choices are: " << endl;
	cout << "A = 99 "; cout << "B = 98 "; cout << "C = 0 "; cout << "D = 2" << endl;
	cin >> answer;
	switch (answer)
	{
	case 'A':
	case 'a':
	{
		cout << "Wrong answer" << endl;
		break;

	}
	case 'b':
	case 'B':
	{
		cout << "Wrong answer" << endl;
		break;
	}
	case 'c':
	case 'C':
	{
		cout << "Correct dude" << endl;
		break;
	}
	case 'D':
	case 'd':
	{
		cout << "Wrong answer" << endl;
		break;
	}
	default:
	{
		cout << "Not an option" << endl;

	}
	}
	cout<<"More Riddles will be added later (with passage of time)"<<endl;
	addons.Contin();

}

/*
void Addons::ColorAlgorithm(string User,string Indicator,float &colorcode,string &ColorManager)
{
	if(Indicator == "CodeGiven")
	{
		if(colorcode == 1)
		{
			ColorManager = "Blue";
		}
		else if(colorcode == 2)
		{
			ColorManager = "Green";
		}
		else if(colorcode == 3)
		{
			ColorManager = "Cyan";
		}
		else if(colorcode == 4)
		{
			ColorManager = "Red";
		}
		else if(colorcode == 5)
		{
			ColorManager = "Purple";
		}
		else if(colorcode == 6)
		{
			ColorManager = "Yellow";
		}
		else if(colorcode == 7)
		{
			ColorManager = "Silver";
		}
		else if(colorcode == 8)
		{
			ColorManager = "Light-Black";
		}
		else if(colorcode == 9)
		{
			ColorManager = "Light-Blue";
		}
		else
		{
			ColorManager = "Default";
		}		
	}
	else if(Indicator == "ColorGiven")
	{
		if((ColorManager == "blue")||(ColorManager == "Blue")||(ColorManager == "BLUE"))
			{
				colorcode = 1;
			}
		else if((ColorManager == "green")||(ColorManager == "Green")||(ColorManager == "GREEN"))
			{
				colorcode = 2;
			}
		else if((ColorManager == "cyan")||(ColorManager == "Cyan")||(ColorManager == "CYAN"))
			{
				colorcode = 3;
			}
			
		if((ColorManager == "red")||(ColorManager == "Red")||(ColorManager == "RED"))
			{
				colorcode = 4;
			}
		else if((ColorManager == "purple")||(ColorManager == "Purple")||(ColorManager == "PURPLE"))
			{
				colorcode = 5;
			}			
		else if((ColorManager == "yellow")||(ColorManager == "Yellow")||(ColorManager == "YELLOW"))
			{
				colorcode = 6;
			}
		else if((ColorManager == "silver")||(ColorManager == "Silver")||(ColorManager == "SILVER"))
			{
				colorcode = 7;
			}
		else if((ColorManager == "light-black")||(ColorManager == "Light-Black")||(ColorManager == "LIGHT-BLACK"))
			{
				colorcode = 8;
			}
		else if((ColorManager == "light-blue")||(ColorManager == "Light-Blue")||(ColorManager == "LIGHT-BLUE"))
			{
				colorcode = 9;
			}			
	}
}

*/


void Addons::Characters_Value_IS(string User,string Indicator)
{
	WallGen wall; Addons addons;
	char ch='a';
	//ch = getche();
	while(ch != '0')
	{
		system("cls");
		wall.wall1(); cout << "Character Value Displayer ";
		cout << endl;
		wall.wall2();
		
		
				
	cout << "Enter character to see it's value (Enter 0 to exit)"<<endl;
	
	ch = getch();
	printf("character = %c     |      its value be = %i ",ch,ch);
	system("pause");
	}
	
}

void Addons::AddonsC(string User,string Indicator)
{
	Addons addons; 
	
	addons.VD_System("1.0");  
	cout << "Intial Release with everything"<<endl;
	addons.VD_System("2.0");  
	cout << "1: Added version display system for Addons"<<endl;
	cout << "2: Rebased for better performance"<<endl;
	cout << "next update will include all technical additions or other things"<<endl;
	addons.VD_System("2.1");  
	cout <<" 1: Upgraded VD system to display points value when float is given"<<endl;
	addons.VD_System("2.2");  
	cout << "1: Finally added a panel to added this section (and in future all modules of addons)"<<endl;
	addons.VD_System("2.3");  
	cout << "1: Upgrades for disclaimer secton which will make it easier for me access and make choice here"<<endl;
	addons.VD_System("2.4");  
	cout << "1: Added filter to avoid greeter display when user is default"<<endl;
	cout << "2: Added Space to greeter "<<endl;
	addons.VD_System("2.5");  
	cout << "1: Added new CONTINUE addon to clear screen after entering any character"<<endl;
	addons.VD_System("3.0");  
	cout << "1: Added set color module to change color of command line window"<<endl;
	cout << "2: Fixed the bug in color changing addon which caused program to terminate or loop empty screen"<<endl;
	addons.VD_System("3.1");  
	cout << "1: Moved hidden panel here from program specific"<<endl;
	cout << "2: Moved Riddle panel here from program specific"<<endl;
	addons.VD_System("3.5");  
	cout << "1: Added Color Algorithm"<<endl;
	cout << "2: Added Random Number Generator"<<endl;
	addons.VD_System("3.6");  
	cout << "1: Added 3 more random number generators of different length"<<endl;
	cout << "2: Added character ASCII value findinf module"<<endl;

	addons.Continue();
}

void Addons::Accessor(string User,string Indicator)
{
	cout << "Currently useless, it will get updated in future to support display of changelog of this panel to other modules till then wait"<<endl;
}

void Addons::Rate_Entry(string User,string Indicator,float &Rate,float &gold_rate,float &silver_rate)
{
	
	if(Indicator == "Rate")
	{
		cout << "Enter exchange rate: (This will be shared among all modules)"<<endl;
		cin >> Rate;
	}
	else
	{
		if((Indicator == "Gold_Rate")||(Indicator == "MaterialRate"))
		{
			cout << "Enter Gold rate: "<<endl;
			cin >> gold_rate;
		}
		if((Indicator == "Silver_Rate")||(Indicator == "MaterialRate"))
		{
			cout << "Enter Silver rate: "<<endl;
			cin >> silver_rate;
		}
	}
	
	
}
