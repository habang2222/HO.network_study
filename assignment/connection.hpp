#ifndef CONNECTION_HPP
#define CONNECTION_HPP

#include <string>
using namespace std;

class Connection {
private:
    string ip;
    int port;

public:
    Connection(string a, int b);

    void show();
};

#endif
