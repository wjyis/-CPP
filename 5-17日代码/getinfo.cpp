#include <iostream>

int main(){
    using std::cout;
    using std::cin;
    using std::endl;

    int carrots;

    cout << "Please input a number" << endl;
    cin >> carrots;
    cout << "Plus 2 with the number" << endl;
    carrots += 2;
    cout << "The number is " << carrots << endl;
    return 0;
}