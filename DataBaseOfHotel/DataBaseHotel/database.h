#pragma once

#include <vector>
#include "hotel.h"


class DatabaseHotel
{
public:
	void addHotel(Hotel& hotel);
	void searchHotelData();
	void editDataHotel();
	void deleteHotel();
	const Hotel& getHotel(int number)const;

private:
	
	vector<Hotel>_hotel;

};