#include "UserInterface.h"


UserInterface::UserInterface(Database& database): _database(database)
{

}

Hotel& UserInterface::inputHotel()
{
   
    
    // диалог с пользователем реализовать
    Hotel* newHotel = new Hotel();
    //cout заполнить информацию


    // вернуть отель
    return *newHotel;
}
