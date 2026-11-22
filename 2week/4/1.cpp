#include <iostream>
#include <string>
// #include <utility>

int main()
{
    std::string data1 = "Hello C++";
    // data1의 내용을 data2로 이동
    
    std::string data2 = std::move(data1);
    std::cout << "data1: " << data1 << std::endl;
    std::cout << "data2: " << data2 << std::endl;

    return 0;
}