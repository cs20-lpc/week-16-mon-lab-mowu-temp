#include <iostream>
#include "MinHeap.hpp"

using namespace std;
int main() {
    MinHeap<int> mh;
    for (int i = 0; i < 100; i++) {
        mh.insert(rand());
        if (!mh.verifyHeap() ) {
            cout << "Heap broken";
        }
    }
    for (int i = 0; i < 20; i++) {
        cout << mh.removeRoot() << endl;
        if (!mh.verifyHeap() ) {
            cout << "Heap broken";
        }
    }
    for (int i = 0; i < 100; i++) {
        mh.insert(rand());
        if (!mh.verifyHeap() ) {
            cout << "Heap broken";
        }
    }
    for (int i = 0; i < 20; i++) {
        cout << mh.removeRoot() << endl;
        if (!mh.verifyHeap() ) {
            cout << "Heap broken";
        }
    }
    while(!mh.empty()) {
        mh.removeRoot();
        if (!mh.verifyHeap() ) {
            cout << "Heap broken";
        }
    }
    return 0;
}