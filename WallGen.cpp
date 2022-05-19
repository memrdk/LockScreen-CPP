#include "iostream"
#include "stdlib.h"


//Classes
#include "Addons.h"
#include "WallGen.h"
using namespace std;






//Version 4.0

//<-------------------- Header Walls and Wals ---------------------
void WallGen::header_wall1(string User,string program_name,string Indicator,string program_version)
{
WallGen wall;
Addons addons;
wall.wall1();
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
cout << endl;
wall.wall1();

}

void WallGen::header_wall2(string User,string program_name,string Indicator,string program_version)
{
WallGen wall; Addons addons;
wall.wall2();
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
cout << endl;
wall.wall2();

}

void WallGen::header_wal1(string User,string program_name,string Indicator,string program_version)
{
WallGen wall; Addons addons;
wall.wal1();
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
cout << endl;
wall.wal1();

}

void WallGen::header_wal2(string User,string program_name,string Indicator,string program_version)
{
WallGen wall; Addons addons;
wall.wal2();
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
cout << endl;
wall.wal2();

}



//------------------ Header Walls and Walls ------------------>

int WallGen::wall2() {
	cout << "==============================================================" << endl << endl;
	return 0;
}

int WallGen::wall1() {
	cout << "===============================================================" << endl;
	return 0;
}

int WallGen::wall() {
	cout << "===============================================================";
	return 0;
}

int WallGen::small_wall()
{
	cout << "============================";
	return 0;
}



int WallGen::small_wall1()
{
	cout << "============================" << endl;
	return 0;
}




int WallGen::small_wall2()
{
	cout << "============================" << endl << endl;
	return 0;
}






























int WallGen::wal2() {
	cout << "---------------------------------------------------------------" << endl << endl;
	return 0;
}

int WallGen::wal1() {
	cout << "---------------------------------------------------------------" << endl;
	return 0;
}

int WallGen::wal() {
	cout << "---------------------------------------------------------------";
	return 0;
}

int WallGen::small_wal()
{
	cout << "-----------------------------";
	return 0;
}



int WallGen::small_wal1()
{
	cout << "-----------------------------" << endl;
	return 0;
}




int WallGen::small_wal2()
{
	cout << "-----------------------------" << endl << endl;
	return 0;
}


