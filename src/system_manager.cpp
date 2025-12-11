#include "system_manager.h"

void system_manager::show_menu(){
    cout << "Welcome to the competition system!" << endl;
    cout << "select your options as follows:" << endl;
    cout << "enter 1 : start competition." << endl;
    cout << "enter 2 : show the past competition records." << endl;
    cout << "enter 3 : clear competition records." << endl;
    cout << "enter 4 : exit sysytem" << endl;
};

void system_manager::start(){
    cout << "start" << endl;
}

void system_manager::clear_past(){
    cout << "clear_past" << endl;
}

void system_manager::exit_system(){
    cout << "bye" << endl;
    system("pause");
}

void system_manager::show_past(){
    cout << "show_past" << endl;
}

void system_manager::init_system(){
    this->victory.clear();
    this->Person_id.clear();
    this->Person_v.clear();
    this->index = 1;
}