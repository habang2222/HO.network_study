#include <iostream>

void on_complete(int result)
{
    std::cout << "작업 완료: " << result << std::endl;
}

void execute(int value, /* 빈칸 */ callback)
{
    int result = value * 2;
    
}

int main()
{
    execute(10, on_complete);

    return 0;
}