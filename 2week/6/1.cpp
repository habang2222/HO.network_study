#include <iostream>

void execute(int value, void (*callback)(int))
{
    int result = value * 2;

    // 콜백 실행
    callback(result);
    /* 빈칸 */
}

int main()
{
    int value;
    std::cin >> value;

    execute(value, [](int result) {
        std::cout << "결과: " << result << std::endl;
    });

    return 0;
}
