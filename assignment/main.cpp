
#include <iostream>
#include <string>
using namespace std;

class Connection {
private:
    string ip;
    int port;

public:
    // 생성자
    Connection(string a, int b) {
        ip = a;
        port = b;
    }

    // 멤버 함수
    void show() {
        cout << "IP: " << ip << endl;
        cout << "PORT: " << port << endl;
    }
};

int main() {
    Connection c1("192.168.0.1", 8080);

    c1.show();

    return 0;
}
