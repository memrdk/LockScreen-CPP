#include "Algorithms_Logics.h"





#include "iostream"
#include "stdlib.h"

#include "WallGen.h"
#include "Addons.h"




using namespace std;

void Algorithms_Logics::HashEdit_Detector(string &User,string &Indicator,string &username)
{
	Addons addons; unsigned no1;
	no1 = addons.RNG_custom(5);
	
	if(User == "DK")
	{
		if((username != "dksoni411")&&(username != "DKSONI411"))
		{
			Indicator = "ChangeinDKDetected";
			User = "AccountTemperred";
			
		}
		else if(no1 == 4)
		{
			
			Indicator = "AskforPassword2";
			User = "SecurityPrecaution";
		}
	if(username == "dksoni411")
	{
	cout << "Username = "<<username<<" | Indicator = "<<Indicator<<" | User "<<User<<" | No. = "<<no1<<endl;	
	}
	
	}
	
	
	
	
}




void Algorithms_Logics::ColorAlgorithm(string User,string Indicator,float &colorcode,string &ColorManager)
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


void Algorithms_Logics::Backdoor_Bot(string &Indicator,string &User,string &P_Mode)
	{
		Addons addons; WallGen wall;
			if(User!="Dhanesh")
		{
		string Specifier,Accesser,Request,Okay,Lover,User_free;
		cout<<"Who is it: "<<endl;
		
		cin>>User_free;
		if(User_free=="DK")
		{
		
			cout<<"G, Kya kaam hai"<<endl;
			cin>>Specifier;
			if(Specifier=="MujhyKuchKehnaHai")
			{
				cout<<"G, Sir, Kaho, Kya kehna hai"<<endl;
				cin>>Accesser;
				if(Accesser=="CanIAccessBackdoor")
				{
					cout<<"Sorry, You can't. There is no such thing as backdoor"<<endl;
					cin>>Request;
					if(Request=="Please")
					{
						cout<<"You are annoying, Let me think"<<endl;
						cin>>Request;
						if(Request=="PrettyPlease")
						{
							Knock_Final:
								{
							cout<<"Okay, OK. You can use backdoor but, Give me a kiss, First"<<endl;
							cin>>Lover;
							if(Lover=="Ummphh")
							{
								cout<<"Alright, Here is your key. Note it "<<endl;
								User="Dhanesh";
								Indicator="RogerX";
								P_Mode="Serious";
								addons.Contin();
							}
							else if(Lover=="FuckYou")
							{
								cout<<"Okay, okay. I was just kidding. Here's your key. Enjoy"<<endl;
								User="Dhanesh";
								Indicator="Default";
								P_Mode="Serious";
								addons.Contin();
							}
							else
							{
							cout<<"Sorry dude, I don't like such kiss"<<endl;
							addons.Contin();
							}
								}
						}
						else if(Request=="PleasePlease")
						{
							cout<<"Okay, there you go"<<endl;
							goto Knock_Final;
						}
						else
						{
							cout<<"I said, just go away"<<endl;
							addons.Contin();
						}
					
					}
					else if(Request=="CommonOn,Please")
					{
						cout<<"As I said, Sorry. Please go away"<<endl;
						addons.Contin();
					}
					else
					{
						cout<<"I said \"You can't\", So you can't. Please go back"<<endl;
						addons.Contin();
					}
					
				}
				else if(Accesser=="IWantedAccesstoBackdoor")
				{
					cout<<"No, You can't. Just go away"<<endl;
					addons.Contin();
				}
				else
				{
					cout<<"No, You can't just go away. Thanks for asking"<<endl;
					addons.Contin();
				}
			}
			else if(Specifier=="IWanttoSaySomething")
			{
				cout<<"Can you please come later. Because I'm busy in eating a lot of memory"<<endl;
				addons.Contin();
			}
			else
			{
				cout<<"Nahi, Main abhi busy. So, see you later"<<endl;
				addons.Contin();
			}
		}
		else
		{
			cout<<"Nice to meet you "<<User_free<<". Now, if you don't mind, I gotta go"<<endl;
			addons.Contin();
		}
		
		
		
		}
		
		else if(User=="Dhanesh")
		{
			cout<<"You're already inside. Please go away"<<endl;
			addons.Contin();
		}
		
		else
		{
			cout<<"Oh, Hey, Bye bye"<<endl;
			addons.Contin();
		}
	}


void Algorithms_Logics::Number_Verifier(string User,string Indicator,float &Variable,string program_choice)
{
	if(program_choice == "1")
	{
		Variable = 1;
	}
	else if(program_choice == "2")
	{
		Variable = 2;
	}
	else if(program_choice == "3")
	{
		Variable = 3;
	}
	else if(program_choice == "4")
	{
		Variable = 4;
	}
	else if(program_choice == "5")
	{
		Variable = 5;
	}
	else if(program_choice == "6")
	{
		Variable = 6;
	}
	else if(program_choice == "7")
	{
		Variable = 7;
	}
	else if(program_choice == "8")
	{
		Variable = 8;
	}
	else if(program_choice == "9")
	{
		Variable = 9;
	}
	else if(program_choice == "10")
	{
		Variable = 10;
	}
	else if(program_choice == "11")
	{
		Variable = 11;
	}
	else if(program_choice == "12")
	{
		Variable = 12;
	}
	else if(program_choice == "13")
	{
		Variable = 13;
	}
	else if(program_choice == "14")
	{
		Variable = 14;
	}
	else if(program_choice == "15")
	{
		Variable = 15;
	}
	else if(program_choice == "16")
	{
		Variable = 16;
	}
	else if(program_choice == "17")
	{
		Variable = 17;
	}
	else if(program_choice == "18")
	{
		Variable = 18;
	}
	else if(program_choice == "19")
	{
		Variable = 19;
	}
	else if(program_choice == "20")
	{
		Variable = 20;
	}
	else if(program_choice == "21")
	{
		Variable = 21;
	}
	else if(program_choice == "22")
	{
		Variable = 23;
	}
	else if(program_choice == "24")
	{
		Variable = 2;
	}
	else if(program_choice == "25")
	{
		Variable = 25;
	}
	else if(program_choice == "26")
	{
		Variable = 26;
	}
	else if(program_choice == "27")
	{
		Variable = 27;
	}
	else if(program_choice == "28")
	{
		Variable = 28;
	}
	else if(program_choice == "29")
	{
		Variable = 29;
	}
	else if(program_choice == "30")
	{
		Variable = 30;
	}
	else if(program_choice == "31")
	{
		Variable = 31;
	}
	else if(program_choice == "32")
	{
		Variable = 32;
	}
	else if(program_choice == "33")
	{
		Variable = 33;
	}
	else if(program_choice == "34")
	{
		Variable = 34;
	}
	else if(program_choice == "35")
	{
		Variable = 35;
	}
	else if(program_choice == "36")
	{
		Variable = 36;
	}
	else if(program_choice == "37")
{
Variable = 37;
}
else if(program_choice == "38")
{
Variable = 38;
}
else if(program_choice == "39")
{
Variable = 39;
}
else if(program_choice == "40")
{
Variable = 40;
}
else if(program_choice == "41")
{
Variable = 41;
}
else if(program_choice == "42")
{
Variable = 42;
}
else if(program_choice == "43")
{
Variable = 43;
}
else if(program_choice == "44")
{
Variable = 44;
}
else if(program_choice == "45")
{
Variable = 45;
}
else if(program_choice == "46")
{
Variable = 46;
}
else if(program_choice == "47")
{
Variable = 47;
}
else if(program_choice == "48")
{
Variable = 48;
}
else if(program_choice == "49")
{
Variable = 49;
}
else if(program_choice == "50")
{
Variable = 50;
}
else if(program_choice == "51")
{
Variable = 51;
}
else if(program_choice == "52")
{
Variable = 52;
}
else if(program_choice == "53")
{
Variable = 53;
}
else if(program_choice == "54")
{
Variable = 54;
}
else if(program_choice == "55")
{
Variable = 55;
}
else if(program_choice == "56")
{
Variable = 56;
}
else if(program_choice == "57")
{
Variable = 57;
}
else if(program_choice == "58")
{
Variable = 58;
}
else if(program_choice == "59")
{
Variable = 59;
}
else if(program_choice == "60")
{
Variable = 60;
}
else if(program_choice == "61")
{
Variable = 61;
}
else if(program_choice == "62")
{
Variable = 62;
}
else if(program_choice == "63")
{
Variable = 63;
}
else if(program_choice == "64")
{
Variable = 64;
}
else if(program_choice == "65")
{
Variable = 65;
}
else if(program_choice == "66")
{
Variable = 66;
}
else if(program_choice == "67")
{
Variable = 67;
}
else if(program_choice == "68")
{
Variable = 68;
}
else if(program_choice == "69")
{
Variable = 69;
}
else if(program_choice == "70")
{
Variable = 70;
}
else if(program_choice == "71")
{
Variable = 71;
}
else if(program_choice == "72")
{
Variable = 72;
}
else if(program_choice == "73")
{
Variable = 73;
}
else if(program_choice == "74")
{
Variable = 74;
}
else if(program_choice == "75")
{
Variable = 75;
}
else if(program_choice == "76")
{
Variable = 76;
}
else if(program_choice == "77")
{
Variable = 77;
}
else if(program_choice == "78")
{
Variable = 78;
}
else if(program_choice == "79")
{
Variable = 79;
}
else if(program_choice == "80")
{
Variable = 80;
}
else if(program_choice == "81")
{
Variable = 81;
}
else if(program_choice == "82")
{
Variable = 82;
}
else if(program_choice == "83")
{
Variable = 83;
}
else if(program_choice == "84")
{
Variable = 84;
}
else if(program_choice == "85")
{
Variable = 85;
}
else if(program_choice == "86")
{
Variable = 86;
}
else if(program_choice == "87")
{
Variable = 87;
}
else if(program_choice == "88")
{
Variable = 88;
}
else if(program_choice == "89")
{
Variable = 89;
}
else if(program_choice == "90")
{
Variable = 90;
}
else if(program_choice == "91")
{
Variable = 91;
}
else if(program_choice == "92")
{
Variable = 92;
}
else if(program_choice == "93")
{
Variable = 93;
}
else if(program_choice == "94")
{
Variable = 94;
}
else if(program_choice == "95")
{
Variable = 95;
}
else if(program_choice == "96")
{
Variable = 96;
}
else if(program_choice == "97")
{
Variable = 97;
}
else if(program_choice == "98")
{
Variable = 98;
}
else if(program_choice == "99")
{
Variable = 99;
}
else if(program_choice == "100")
{
Variable = 100;
}

else
{
Variable = 0;	
}

	
}

void Algorithms_Logics::Testing_Facility(string User,string Indicator)
{
	float variable=20999; Addons addons; float phaser=21999;
	do
	{
		
	cout << "else if(program_choice == \"";cout << variable; cout << "\")"<<endl;
	cout << "{"<<endl;
		cout << "Variable = ";cout << variable;cout << ";"<<endl;
	cout << "}"<<endl;
	if(variable == phaser)
	{
		cout << "Number till ";cout << phaser; cout << " is completed. Please copy"<<endl;
		addons.CONTINUE();
		phaser = phaser + 1000;
		system("cls");
	}
	
	variable++;
	}
	while(variable <= 21000);
	//cout << "Happy Holidays"<<endl;
}


	
	
	
void Algorithms_Logics::Algorithm_Changelog(string Indicator,string User)
	{
		Addons addons;
		addons.VD_System("1.0");
		cout << "Intial release with nothing special and a lots of bugs"<<endl;
		addons.VD_System("2.0");
		cout << "Added number verifier algorithm to check if an output is a number or not"<<endl;
	}
	
		
