#include "system_manager.h"


int main(){
    system_manager mgr;
    int option;
    while(1){
        system("cls");
        mgr.show_menu();
        cin >> option;
        switch(option){
            case 1:
                mgr.start();
                break;
            case 2:
                mgr.show_past();
                break;
            case 3:
                mgr.clear_past();
                break;
            case 4:
                mgr.exit_system();
                break;
            default:
                system("cls");
        }
    }
    return 0;
}