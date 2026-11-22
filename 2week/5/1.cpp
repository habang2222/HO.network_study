#include <iostream>
#include <stdexcept>

int divide(int a, int b)
{
    if (b == 0)
    {
        throw std::runtime_error("0 안됨");//throw : 예외 발생 시키는거
        // 예외 발생
        /* 빈칸 */
    }

    return a / b;
}

int main()
{
    try //예외가 발생 할수도 있음
    {
        std::cout << divide(10, 0) << std::endl;
    }
    catch (const std::exception& e)//catch : 예외 잡아서 처리 하는거  std::exception : 예외 클래스
    {
        // 예외 메시지 출력
        std::cout << e.what() << std::endl;//waht : 오류 설명 반환 함수
        /* 빈칸 */
    }

    return 0;
}