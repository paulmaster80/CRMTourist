#include "UserInterface.h"


UserInterface::UserInterface(Database& database): _database(database)
{

}

Hotel& UserInterface::inputHotel()
{
   
    
    // ������ � ������������� �����������
    Hotel* newHotel = new Hotel();
    //cout ��������� ����������


    // ������� �����
    return *newHotel;
}
