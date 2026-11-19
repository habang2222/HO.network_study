#include <iostream>
#include "connection.hpp"

using namespace std;

Connection::Connection(string a, int b) {//객체 생성자
    ip = a;
    port = b;
}

void Connection::show() {
    cout << "IP: " << ip << ", Port: " << port << endl;
}
