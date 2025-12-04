#include <iostream>
#include "MinHeap.hpp"

using namespace std;
int main() {
    MinHeap<int> mh;
    for (int i = 0; i < 1000; i++) {
        mh.insert(rand());
        if (!mh.verifyHeap() ) {
            cout << "Heap broken";
        }
    }
    for (int i = 0; i < 10; i++) {
        cout << mh.removeRoot() << endl;
    }
    for (int i = 0; i < 100; i++) {
        mh.removeRoot();
    }for (int i = 0; i < 10; i++) {
        cout << mh.removeRoot() << endl;
    }
    return 0;
}