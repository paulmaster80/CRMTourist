#pragma once

#include <string>

using namespace std;

class Hotel
{
public:

	Hotel();
	Hotel(string name, string adress, string category, string country);
	~Hotel();

	void setData(string name, string adress, string category, string country);
	void setName(string name);
	void setAdress(string adress);
	void setCategory(string category);
	void setCountry(string country);
	string getName();
	string getAdress();
	string getCategory();
	string getCountry();

	void printData();

private:

	string _name;
	string _adress;
	string _category;
	string _country;
};
