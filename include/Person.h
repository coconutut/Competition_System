#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Person{
public:
    string name;
    vector<int> score;
    Person();
    ~Person();
};