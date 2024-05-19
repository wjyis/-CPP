#include <iostream>
//结构体的全局声明
struct chara{
    std::string name;
    std::string gender;
    int age;
}Alice,Jone;

int main(){
    Alice = {"Alice", "female", 18};
    Jone = {"Jone", "male", 19};
    std::cout << Alice.name;
    return 0;
}