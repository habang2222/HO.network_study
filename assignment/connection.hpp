#ifndef CONNECTION_HPP
#define CONNECTION_HPP

#include <string>
#include <iostream>

using namespace std;

class Connection {
    public:
        std::string ip;
        int port;
    public:
        Connection(std::string a, int b);
        void show();
};

#endif