#pragma once
#include"database.h"

class UserInterface
{
public:
	UserInterface(DatabaseHotel& db);
	int outputMenuConsole();
	void menuOperations();
	void inputNewHotel();
	void searchHotel();
	void editDataHotel();
	void printData();

private:
	DatabaseHotel& _db;
};



