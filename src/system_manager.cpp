#include "system_manager.h"

void system_manager::show_menu(){
    cout << "Welcome to the competition system!" << endl;
    cout << "select your options as follows:" << endl;
    cout << "enter 1 : start competition." << endl;
    cout << "enter 2 : show the past competition records." << endl;
    cout << "enter 3 : clear competition records." << endl;
    cout << "enter 4 : exit system" << endl;
};

void system_manager::Create_Person(){
    string str="ABCDEFGHIJKL";
    for(int i = 0; i < 12 ; i++){
        string name = "选手" + str[i];
        Person temp;
        temp.name = name;
        int id = 10001 + i;
        temp.score.assign(2, 0);
        v1.push_back(id);
        m.insert(pair<int, Person>(id, temp));
    }
}

class print_int{
public:
    void operator()(int i){
        cout << i << " ";
    }
};

void system_manager::shuffle_(){
    random_device rd;
    mt19937 g(rd());
    shuffle(v1.begin(), v1.end(), g);
    cout << "Frist Stage Draw:" << endl;
    cout << "Frist Group:";
    for_each(v1.begin(), v1.begin() + 6, print_int());
    cout << endl;
    cout << "Second Group:";
    for_each(v1.begin() + 6, v1.end(), print_int());
}

void system_manager::clear_past(){
    cout << "clear_past" << endl;
}

void system_manager::exit_system(){
    cout << "bye" << endl;
    system("pause");
    exit(0);
}

void system_manager::show_past(){
    cout << "show_past" << endl;
}

void system_manager::init_system(){
    this->v1.clear();
    this->v2.clear();
    this->v3.clear();
    this->m.clear();
    this->index = 1;
}

system_manager::system_manager(){
    this->init_system();
}

system_manager::~system_manager(){};

void system_manager::stage1(){
    map<int, int> temp1;
    map<int, int> temp2;
    for(auto it = v1.begin(); it != v1.end(); it++){
        deque<int> d;
        for(int i = 0; i < 10; i++){
            int temp = rand() % 100;
            d.push_back(temp);
        }
        sort(d.begin(), d.end(), greater());
        d.pop_front();
        d.pop_back();
        int sum = accumulate(d.begin(), d.end(), 0);
        int score = sum / d.size();
        if(it < v1.begin() + 6){
            temp1.insert(pair<int, int>(score, *it));
        }
        else{
            temp2.insert(pair<int, int>(score, *it));
        }
        m[*it].score.push_back(score); 
        // cout << score << " ";
    }
    cout << "sucess after stage 1: ";
    int cnt = 0;
    for(map<int, int>::iterator it = temp1.begin(); it != temp1.end(); it++){
        if(cnt < 3){
            cout << it->second << " ";
        }
        cnt++;
    }
    cnt = 0;
    for(map<int, int>::iterator it = temp2.begin(); it != temp2.end(); it++){
        if(cnt < 3){
            cout << it->second << " ";
        }
        cnt++;
    }
}

void system_manager::start(){
    Create_Person();
    shuffle_();
    system("pause");
    stage1();
    system("pause");
}