#include <iostream>
#include "connection.hpp"

using namespace std;

Connection::Connection(string a, int b) {
    ip = a;
    port = b;
}

void Connection::show() {
    cout << "IP: " << ip << endl;
    cout << "PORT: " << port << endl;
}
