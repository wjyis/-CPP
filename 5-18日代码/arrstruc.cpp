//结构中的位字段
#include <iostream>
//冒号后面指定了所使用的位数
struct torgle_register{
    unsigned int SN:4;
    unsigned int:4;
    bool goodIn:1;
    bool goodTorgle:1;
};

int main(){
    //注意这个写法是不严谨的
    torgle_register test{14,true,false};
    return 0;
}

