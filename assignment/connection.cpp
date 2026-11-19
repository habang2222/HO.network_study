#include <iostream>
#include "connection.hpp"

using namespace std;

void Connection::show() {
    cout << "IP: " << ip << ", Port: " << port << endl;
}