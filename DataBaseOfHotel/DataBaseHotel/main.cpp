
#include <iostream>
#include "interface.h"
#include "database.h"


int main()
{
    setlocale(LC_ALL, "ru");
    DatabaseHotel& dataBaseHotel= *new DatabaseHotel;
    UserInterface& userInterface = *new UserInterface(dataBaseHotel);
    

    
    delete& userInterface;
    delete& dataBaseHotel;
}

