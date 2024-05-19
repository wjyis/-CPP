#include <iostream>

int main(){
    using namespace std;
    int updates = 6;
    int *p_updates;
    //p_updates 和updates完全等价,就像一枚硬币的两面一样
    //int*表示声明一个指向int的指针,所以*p_updates是一个指向int的指针
    p_updates = &updates;

    cout << "Values : updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

    cout << "Addresses : &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;

    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;
    
    return 0;

}