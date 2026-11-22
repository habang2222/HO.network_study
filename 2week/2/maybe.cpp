#include <iostream>
#include <functional>
int main()
{
	int value = 10;

	auto func1 = [value]() {
	    // value 출력
		std::cout << value << std::endl;
        //2번 메인 문제랑 똑같은 형태 임으로 10
        //got GPT님 대답 : 람다를 생성한 시점에 value의 값을 복사
	};

	auto func2 = [&value]() {
	    // value 출력
		std::cout << value << std::endl;
        // value를 참조 했으니까 호출 된 그 상태의 값인 20
	};

	value = 20;

	func1();
	func2();
}