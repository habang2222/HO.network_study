#include <iostream>
#include <memory>

int main()
{
    auto ptr1 = std::make_shared<int>(100);

    // ptr1을 공유하는 ptr2 생성
    auto ptr2 = ptr1;
    /* 빈칸 */

    std::cout << ptr1.use_count() << std::endl;

    return 0;
}