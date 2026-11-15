#include <iostream>
#include "connection.hpp"

using namespace std;

int main() {
    Connection c1("192.168.0.1", 8080);
    Connection c2("127.0.0.1", 3000);

    c1.show();
    c2.show();

    return 0;
}
