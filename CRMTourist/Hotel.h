#pragma once
#include <iostream>

using namespace std;

class Hotel
{
public: 

	Hotel();
	Hotel(string country, int category, string name);
	Hotel(Hotel& other);
	~Hotel();
	
	 Hotel& operator= (Hotel& other);
	 void setData(string country, int category, string name);
	 string getData();
	 void setCountry(string country);
	 void setCategory(int category);
	 void setNameHotel(string name);
	 string country();
	 int category();
	 string name();
	
private:

	string _country;
	string _adress;
	int _category;
	string _name;
	
};

