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
	
	cout << "Наименование: " << endl;
	cin >> name;
	cout << "Страна: " << endl;
	cin >> country;
	cout << "Город: " << endl;
	cin >> city;
	cout << "Адрес: " << endl;
	cin >> adress;
	cout << "Категория: " << endl;
	cin >> category;
	Hotel hotel(name, adress, category, country, city);
	_db.addHotel(hotel);
}

void UserInterface::searchHotel()
{
	int name{};
	cout << "Ввведите название отеля" << endl;
	cin >> name;


}

void UserInterface::editDataHotel()
{

}



int UserInterface::outputMenuConsole()
{
	int _stateMenu{};
	cout << "Выберите действие: " << endl
		<< "(0) Выход из программы" << endl
		<< "(1) Создать новый" << endl
		<< "(2) Редактировать" << endl
		<< "(3) Удалить" << endl;
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
	cout << "Отель: " << Hotel::getName << endl;
	cout << "Страна: " << Hotel::getCountry << endl;
	cout << "Город: " << Hotel::getCity << endl;
	cout << "Адрес: " << Hotel::getAdress << endl;
	cout << "Категория: " << Hotel::setCategory << endl;
}
