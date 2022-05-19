#pragma once

#include "string"
using namespace std;
class Addons
{
	
public:
	void AtoZ_Printer(string User,string Indicator,char start,char end,string P_Mode);
	void Random_Colors(float &colorcode, string &ColorManager);
	int RNG_custom(unsigned range);
	void Delete_Facility(string User,string Indicator);

void Characters_Value_IS(string User,string Indicator);

void Rate_Entry(string User,string Indicator,float &Rate,float &gold_rate,float &silver_rate);
void Hidden_Panel(string User,string Indicator);
void Riddler(string User,string Indicator);
void ADdons(string User,string Indicator);
//void ColorAlgorithm(string User,string Indicator,float &colorcode,string &ColorManager);
int VD_Systems(float versions);
int VD_System(float versions);
int	Contin();
int Continue(); 
int CONTINUE();
int Greeter(string User);

int Help_Starter(string User,string Indicator,string ProgChoice);

void console_color_changer();
void setcolor(unsigned short color);
int VD_System(string VDS);
void Accessor(string User,string Indicator);
int ND_System(string VDS);
int VD_Systems(string VDS);
int ND_Systems(string VDS);

void Disclaimer(string User,string Indicator);
protected:
void AddonsC(string User,string Indicator);


};



