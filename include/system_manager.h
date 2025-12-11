#pragma once 
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <random>
#include <deque>
#include "Person.h"
using namespace std;

class system_manager{
public:
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    map<int, Person> m;
    int index;

    void init_system();
    void show_menu();
    void Create_Person();
    void shuffle_();
    void stage1();
    void start();
    void show_past();
    void clear_past();
    void exit_system();
    system_manager();
    ~system_manager();
};