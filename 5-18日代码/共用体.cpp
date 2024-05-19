#include <iostream>

struct Chara{
    std::string name;
    std::string gender;

    union Id{
        int num;
        bool is_item;
    }id;
};

int main(){
    Chara Alice;
    Alice.name = "alice";
    Alice.gender = "female";
    Alice.id.is_item = false;

    return 0;

};