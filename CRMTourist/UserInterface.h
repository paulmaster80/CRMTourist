#pragma once

#include "Hotel.h"
#include "Order.h"
#include "Tourist.h"
#include "TypeTour.h"
#include "Database.h"


class UserInterface
{
public:
	UserInterface(Database& database);

	Hotel& inputHotel();
	void addHotel();
private:

	Database& _database;

};

