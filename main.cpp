#include <iostream>
#include <stdlib.h>
#include "windows.h"
#include "Addons.h"
#include "WallGen.h"
#include "UserName.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	Addons addons;
	UserName lockscreen;

	string Indicator="Default",User = "DK";
	system("cls");
	string P_Mode = "Testing";
	
	lockscreen.LockScreen(Indicator,User,P_Mode,"Beauty","Blue");
	system("pause");
	return 0;
}



