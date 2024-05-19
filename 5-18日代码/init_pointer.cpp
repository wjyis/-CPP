#include <iostream>
//这个例子告诉我们,在使用指针之前,一定要先初始化指针的地址


int main(){
    using namespace std;
    int higgens = 5;
    //分析一下,这里创建了一个指向int的指针pt,这个指针指向的是变量higgens的地址
    int *pt = &higgens;

    cout << "Value of higgens = " << higgens << "; Address of higgens = " << &higgens << endl;
    //可以看到,pt的值实际上就是变量higgens的地址
    //而*pi的值则是变量higgens的值
    cout << "Value of *pt = " << *pt << "; Value of pt = " << pt << endl;

    return 0;
}