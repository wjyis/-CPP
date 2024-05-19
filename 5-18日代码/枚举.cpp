#include <iostream>

//枚举用法的示例
int main(){
    enum spectrum{mon, tue, thi, wed, fri, sat, sun}; // 定义枚举
    spectrum band = mon; // 初始化band为枚举的第一个元素mon

    // 使用switch-case结构来输出枚举值对应的文字，提高代码可读性
    switch(band) {
        case mon:
            std::cout << "Monday";
            break;
        case tue:
            std::cout << "Tuesday";
            break;
        case thi:
            std::cout << "Thursday"; // 注意：原代码中的"thi"可能意指"Thursday"
            break;
        case wed:
            std::cout << "Wednesday";
            break;
        case fri:
            std::cout << "Friday";
            break;
        case sat:
            std::cout << "Saturday";
            break;
        case sun:
            std::cout << "Sunday";
            break;
        default:
            std::cout << "Unknown day";
    }
    std::cout << std::endl; // 添加换行

    return 0;
}