#include <iostream>
#include <string>

using namespace std;//py에서 import ns같은거

int main() {
    int a = 5;
    string b = "c++++"; //문자열로 저장
    string c = "== c#";
    cout << a << "\n" + b + " " << c << endl;
    cout << a << endl << b << " " << c << "\n";//endl은 줄바꿈

    cout << b[0] << b[1] << endl;
    if (b.empty()) {
        cout << "b is empty" << endl;
    } else {
        cout << "b is not empty" << endl;
    }
    printf("Hello, World!\n");//이게 되네요
    return 0;
}