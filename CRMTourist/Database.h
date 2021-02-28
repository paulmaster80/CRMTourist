#pragma once

#include <vector>

#include "Hotel.h"
#include "Order.h"
#include "Tourist.h"
#include "TypeTour.h"



class Database
{
public:

	void addHotel(const Hotel& hotel);
	void addTourist(const Tourist& tourist);
	void addTypeTour(const TypeTour& typeTour);
	 

private:	
	
	vector <Hotel> _hotel;
	vector <Tourist> _tourist;
	vector <Order> _order;
	vector <TypeTour> _typeTour;

	

};

