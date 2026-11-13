#include <iostream>
using namespace std;

void func1(int value) {
    value = 20;
    cout << "func1: " << value << endl;
}
void func2(int* value) {
    *value = 30;
    cout << "func2: " << *value << endl;
}
void func3(int& value) {
    value = 40;
    cout << "func3: " << value << endl;
}
void func4(const int& value) {
    cout << "func4: " << value << endl;
}

int main() {
    int value;
    func1(value);
    func2(&value);
    func3(value);
    func4(value);
    return 0;
}