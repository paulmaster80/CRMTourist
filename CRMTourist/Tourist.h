#pragma once
#include <iostream>

using namespace std;

class Tourist
{
public:
    void setData(string firstName, string lastName, int age);
    void printData();

private:
    string firstName_;
    string lastName_;
    int age_;
};

