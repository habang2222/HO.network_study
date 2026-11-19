#ifndef CONNECTION_HPP//만약 이 파일이 실행 중이라면
#define CONNECTION_HPP//만약 이 파일이 실행 중이 아니라면

#include <string>
#include <iostream>

using namespace std;

class Connection {//클래스 선언
    private://프라이빗 이거 짜피 같은 클래스에서 부르는걸 가져 오는 거라서 가능
        std::string ip;
        int port;
    public:
        Connection(std::string a, int b);
        void show();
};

#endif//여기가 끝 1 2 번줄 확인 하는거
