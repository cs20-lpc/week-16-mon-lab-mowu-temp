#include <iostream>
#include "MinHeap.hpp"

using namespace std;
int main() {
    MinHeap<int> mh;
    for (int i = 10; i >= 1; i--) {
        mh.insert(i);
    }
    while(!mh.empty()) {
        cout << mh.removeRoot() << " ";
    }
    cout << endl;
    for (int i = 1; i <= 10; i++) {
        mh.insert(i);
    }
    while(!mh.empty()) {
        cout << mh.removeRoot() << " ";
    }
    cout << endl;

    for (int i = 1; i <= 10; i++) {
        mh.insert(i);
    }
    for (int i = 0; i < 5; i++) {
        cout << mh.removeRoot() << " ";
    }
    for (int i = 1; i <= 5; i++) {
        mh.insert(i);
    }
    while(!mh.empty()) {
        cout << mh.removeRoot() << " ";
    }
    cout << endl;


    return 0;
}