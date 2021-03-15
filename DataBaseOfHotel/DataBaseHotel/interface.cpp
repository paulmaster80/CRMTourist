#include "interface.h"

#include<iostream>
#include "database.h"
#include "hotel.h"
using namespace std;


UserInterface::UserInterface(DatabaseHotel& db) : _db(db)
{
}

void UserInterface::inputNewHotel()
{
	string name;
	string adress;
	string category;
	string country;
	string city;
	
	cout << "������������: " << endl;
	cin >> name;
	cout << "������: " << endl;
	cin >> country;
	cout << "�����: " << endl;
	cin >> city;
	cout << "�����: " << endl;
	cin >> adress;
	cout << "���������: " << endl;
	cin >> category;
	Hotel hotel(name, adress, category, country, city);
	_db.addHotel(hotel);
}

void UserInterface::searchHotel()
{
	int name{};
	cout << "�������� �������� �����" << endl;
	cin >> name;


}

void UserInterface::editDataHotel()
{

}



int UserInterface::outputMenuConsole()
{
	int _stateMenu{};
	cout << "�������� ��������: " << endl
		<< "(0) ����� �� ���������" << endl
		<< "(1) ������� �����" << endl
		<< "(2) �������������" << endl
		<< "(3) �������" << endl;
	cin >> _stateMenu;
	return _stateMenu;
}

void UserInterface::menuOperations()
{
	int stateMenu = outputMenuConsole();
	while (stateMenu != 0)
	{
		switch (stateMenu)
		{
		case 1:
			inputNewHotel();
			break;
		case 2:
			searchHotel();
			break;
		case 3:

			break;
		default:
			break;
		}

	}
	cout << "Good bye!" << endl;
}

void UserInterface::inputNewHotel()
{

}

void UserInterface::searchHotel()
{
}

void UserInterface::editDataHotel()
{
}

void UserInterface::printData()
{
	cout << "�����: " << Hotel::getName << endl;
	cout << "������: " << Hotel::getCountry << endl;
	cout << "�����: " << Hotel::getCity << endl;
	cout << "�����: " << Hotel::getAdress << endl;
	cout << "���������: " << Hotel::setCategory << endl;
}
