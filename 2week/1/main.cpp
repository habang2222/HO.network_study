#include <iostream>

void on_complete(int result)
{
    std::cout << "작업 완료: " << result << std::endl;
}

void execute(int value, void (*callback)(int))
{
    int result = value * 2;


    // 전달받은 콜백 함수 호출
    callback(result);
    /* 빈칸 */
}

int main()
{
    execute(10, on_complete);

    return 0;
}