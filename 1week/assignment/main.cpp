#include "connection.hpp"
using namespace std;
int main() {
    Connection connection("192.168.1.1", 8080);//객체 값 넣어서 실행
    connection.show();
    return 0;
}
