#include "hotel.h"

Hotel::Hotel()
{
    _name = nullptr;
    _adress = nullptr;
    _category = nullptr;
    _country = nullptr;
}

Hotel::Hotel(string name, string adress, string category, string country)
{
    _name = name;
    _adress = adress;
    _category = category;
    _country = country;
}

Hotel::~Hotel()
{
}

void Hotel::setData(string name, string adress, string category, string country)
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

void Hotel::printData()
{

}
