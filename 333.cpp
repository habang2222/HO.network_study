#include <iostream>
using namespace std;

void func1(int value) {
    value = 20;
    cout << "func1: " << value << endl;
}//그냥 20 밸류에 넣기
//데이터 를 복사해서 넣기 때문에 main의 value에는 영향이 없음
void func2(int* value) {
    *value = 30;
    cout << "func2: " << *value << endl;
}//포인터로 30 밸류에 넣기
//포인터를 통해서 main의 value에 직접 접근 가능
//데이터 복사 발생 안함
void func3(int& value) {
    value = 40;
    cout << "func3: " << value << endl;
}//간접적으로 40 밸류에 넣기
//참조를 통해서 main의 value에 직접 접근 가능
//데이터 복사 발생 안함
void func4(const int& value) {
    //value = 50 애러
    cout << "func4: " << value << endl;
}//원본 변수 값 변경 불가 
//참조를 통해서 main의 value에 직접 접근 가능
//데이터 복사 발생 안함
//const로 값 고정 되어 있어서 값 못 바꿈
int main() {
    int value;
    printf("value: %d\n", value);
    func1(value);
    printf("value: %d\n", value);
    func2(&value);
    printf("value: %d\n", value);
    func3(value);
    printf("value: %d\n", value);
    func4(value);
    printf("value: %d\n", value);
    return 0;
}