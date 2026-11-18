#include <iostream>
#include "connection.hpp"

Connection::Connection(std::string a, int b) {
    ip = a;
    port = b;
}

void Connection::show() {
    std::cout << "IP: " << ip << ", Port: " << port << std::endl;
}