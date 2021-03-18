#include "hotel.h"


int Hotel::lastNumber = 0;

Hotel::Hotel():_name("noname"), _adress("noadress"), _category("nocategory"), _country("nocountry")
{
    lastNumber++;
    _id = lastNumber;
}

Hotel::Hotel(string name, string adress, string category, string country,string city)
{
    lastNumber++;
    _id = lastNumber;
    _name = name;
    _adress = adress;
    _category = category;
    _country = country;
    _city = city;
    
}

Hotel::~Hotel()
{
}

//void Hotel::setData(string name, string adress, string category, string country, string _city)
//{
//    _name = name;
//    _adress = adress;
//    _category = category;
//    _country = country;
//}

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

string Hotel::getName()const
{
    return _name;
}

string Hotel::getAdress()const
{
    return _adress;
}

string Hotel::getCategory()const
{
    return _category;
}

string Hotel::getCountry()const
{
    return _country;
}

string Hotel::getCity()const
{
    return _city;
}


