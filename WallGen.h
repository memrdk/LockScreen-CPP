#pragma once


#include "string"
using namespace std;


class WallGen
{
public:
	int wall();
	int wall2();
	int wall1();

	int small_wall();
	int small_wall1();
	int small_wall2();

	int wal();
	int wal2();
	int wal1();

	int small_wal();
	int small_wal1();
	int small_wal2();
	
	
	void header_wall1(string User,string program_name,string Indicator,string program_version);
	void header_wall2(string User,string program_name,string Indicator,string program_version);
	
	
	
	void header_wal1(string User,string program_name,string Indicator,string program_version);
	void header_wal2(string User,string program_name,string Indicator,string program_version);
	
	
	

};



