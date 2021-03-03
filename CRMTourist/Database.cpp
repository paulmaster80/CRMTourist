#include "Database.h"

void Database::addHotel(const Hotel& hotel)
{
	_hotel.push_back(hotel);
}

void Database::addTourist(const Tourist& tourist)
{
	_tourist.push_back(tourist);
}

void Database::addTypeTour(const TypeTour& typeTour)
{
	_typeTour.push_back(typeTour);
}

