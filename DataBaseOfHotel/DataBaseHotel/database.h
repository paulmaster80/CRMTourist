#pragma once

#include <vector>


class DatabaseHotel
{
public:
	void addHotel(Hotel& hotel);
	void searchHotelData();
	void editDataHotel();
	void deleteHotel();

private:
	
	vector<Hotel>_hotel;

};