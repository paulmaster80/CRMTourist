#pragma once

#include <string>

using namespace std;

class Hotel
{
public:

	Hotel();
	Hotel(string name, string adress, string category, string country, string _city);
	~Hotel();

	//void setData(string name, string adress, string category, string country, string _city);
	void setName(string name);
	void setAdress(string adress);
	void setCategory(string category);
	void setCountry(string country);
	void setCity(string city);
	string getName()const;
	string getAdress()const;
	string getCategory()const;
	string getCountry()const;
	string getCity()const;
		

private:

	string _name;
	string _adress;
	string _category;
	string _country;
	string _city;
	static int lastNumber;
	int _id;
};
