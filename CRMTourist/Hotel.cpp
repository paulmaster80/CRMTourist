#include "Hotel.h"

Hotel::Hotel()
{
	_country = nullptr;
	_category = 0;
	_name = nullptr;
}

Hotel::Hotel(string country, int category, string name)
{
}

Hotel::Hotel(Hotel& other)
{
}

Hotel::~Hotel()
{
}

Hotel& Hotel::operator=(Hotel& other)
{
	 // TODO: insert return statement here
}

void Hotel::setData(string country, int category, string name)
{
	_country = country;
	_category = category;
	_name = name;
}

string Hotel::getData()
{
	return string();
}

void Hotel::setCountry(string country)
{
}

void Hotel::setCategory(int category)
{
}

void Hotel::setNameHotel(string name)
{
}

string Hotel::country()
{
	return string();
}

int Hotel::category()
{
	return 0;
}

string Hotel::name()
{
	return string();
}
