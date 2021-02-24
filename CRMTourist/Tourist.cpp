#include "Tourist.h"


void Tourist::setData(string firstName, string lastName, int age)
{
    firstName_ = firstName;
    lastName_ = lastName;
    age_ = age;
}

void Tourist::printData()
{
    cout << firstName_ << " " << lastName_ << " " << age_ << endl;
}
