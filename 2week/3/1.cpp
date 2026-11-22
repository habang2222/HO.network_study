#include <iostream>
#include <memory>

class Test
{
public:
    Test()
    {
        std::cout << "객체 생성" << std::endl;
    }

    ~Test()
    {
        std::cout << "객체 소멸" << std::endl;
    }
};

int main()
{
    // unique_ptr 객체 생성
    std::unique_ptr<Test> ptr(new Test());
    /* 빈칸 */


    std::cout << "프로그램 종료" << std::endl;

    return 0;
}