#include <iostream>

struct inflatable{
    char name[20];
    float volume;
    double price;
};

//结构可以使用string类
struct chara{
    std::string name;
    int age;
};

int main(){
    using namespace std;
    inflatable guest = {
        "Alice",
        1.88,
        29.99
    };
    //注意这里初始化的形式
    inflatable alice{"Daphne", 1.38, 32.48};

    chara alic{"alice", 18};


    cout << guest.name << endl;
    cout << alice.name << endl;
    cout << alic.name << endl;

    return 0;
}