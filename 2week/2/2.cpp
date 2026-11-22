#include <iostream> 



int main()
{
    int value = 10;

    auto callback = /* 빈칸 */ [value]() {
        std::cout << value << std::endl;
    };

    callback();

    return 0;
}