#include "Tourist.h"


void Tourist::setData(string firstName, string lastName, int age)
{
    _firstName = firstName;
    _lastName = lastName;
    _age = age;
}

void Tourist::printData()
{
    cout << _firstName << " " << _lastName << " " << _age << endl;
}
