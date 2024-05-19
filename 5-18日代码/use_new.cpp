#include <iostream>

int main(){
    using namespace std;

    int nights = 1001;
    int *pt = new int;  //申请一片空间
    *pt = 1001;     //存储一个数值

    cout << "nights value = " << nights << ": location" << &nights <<endl;
    cout << "int value = " << *pt << ":location = " << pt << endl;
    double *pd = new double;
    *pd = 10000001.0;

}