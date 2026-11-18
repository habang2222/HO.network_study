#ifndef CONNECTION_HPP
#define CONNECTION_HPP

#include <string>

class Connection {
    public:
        std::string ip;
        int port;
    public:
        Connection(std::string a, int b);
        void show();
};



#endif