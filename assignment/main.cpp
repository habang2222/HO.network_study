#include "connection.hpp"

int main() {
    Connection connection("192.168.1.1", 8080);
    connection.show();
    return 0;
}
