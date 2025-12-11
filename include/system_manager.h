#pragma once 
#include <iostream>
#include <vector>
#include <map>
#include "Person.h"
using namespace std;

class system_manager{
public:
    vector<int> Person_id;
    vector<int> Person_v;
    vector<int> victory;
    map<int, Person> m;
    int index;
    void init_system();
    void show_menu();
    void start();
    void show_past();
    void clear_past();
    void exit_system();
};