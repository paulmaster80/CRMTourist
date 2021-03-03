#pragma once
#include <iostream>

using namespace std;

class Tourist
{
public:
    void setData(string firstName, string lastName, int age);
    void printData();

private:
    string _firstName;
    string _lastName;
    int _age;
};

