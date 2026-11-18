#include <iostream>
#include <string>

using namespace std;

int main() {
    int a = 5;
    string b = "c++++"; //문자열로 저장
    string c = "== c#"; // "
    cout << a << "\n" + b + " " << c << endl;
    cout << b[0] << b[1] << endl;
if (b.empty()) {
        cout << "b is empty" << endl;
    } else {
        cout << "b is not empty" << endl;
    }
    return 0;
}