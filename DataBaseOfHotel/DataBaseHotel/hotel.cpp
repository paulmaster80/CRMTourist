#include "hotel.h"
#include <iostream>

using namespace std;

Hotel::Hotel()
{
    _name = "";
    _adress = "";
    _category = "";
    _country = "";
}

Hotel::Hotel(string name, string adress, string category, string country,string _city)
{
    _name = name;
    _adress = adress;
    _category = category;
    _country = country;
}

Hotel::~Hotel()
{
}

void Hotel::setData(string name, string adress, string category, string country, string _city)
{
    _name = name;
    _adress = adress;
    _category = category;
    _country = country;
}

void Hotel::setName(string name)
{
    _name = name;
}

void Hotel::setAdress(string adress)
{
    _adress = adress;
}

void Hotel::setCategory(string category)
{
    _category = category;
}

void Hotel::setCountry(string country)
{
    _country = country;
}

void Hotel::setCity(string city)
{
    _city = city;
}

string Hotel::getName()
{
    return _name;
}

string Hotel::getAdress()
{
    return _adress;
}

string Hotel::getCategory()
{
    return _category;
}

string Hotel::getCountry()
{
    return _country;
}

string Hotel::getCity()
{
    return _city;
}

void Hotel::addHotel()
{
    Hotel hotel;
    cout << "Название: " << endl;
    
}

void Hotel::printData()
{
    cout << "Отель: " << _name << endl;
    cout << "Страна: " << _country << endl;
    cout << "Город: " << _city << endl;
    cout << "Адрес: " << _adress << endl;
    cout << "Категория: " << _category << endl;
}
