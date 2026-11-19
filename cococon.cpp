#include <vector>
#include <iostream>
using namespace std;
int main() {
    vector<float> v;//벡터 선언
    v.push_back(1);//리스트에 1을 추가
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout<<endl;
    v.insert(v.begin() + 2, 2.5);//2.5를 2번째 인덱스에 넣게
    for (float x : v) {
        cout << x <<" ";
    }
    cout<<endl;

    v.pop_back();//마지막 요소 제거
    v.erase(v.begin() + 3);//3번째 인덱스 제거
    for (int x : v) {
        cout << x << " ";
    }
        cout<<endl;

    if (v.empty()) {
        cout << "empty" << endl;
    } else {
        cout << "not empty" << endl;
    }
    return 0;
}