#include <iostream>
#include <cmath>

int main(){
    using namespace std;

    double area;
    cout << "Enter the floor area, in square feet, of your home" << endl;
    cin >> area;

    double side;
    side = sqrt(area);
    cout << side << endl;
    return 0;
}