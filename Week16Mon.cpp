#include <iostream>
#include "MinHeap.hpp"
using namespace std;

// Use a MinHeap to sort ascending
template <typename T>
void heapsort(vector<T>& arr) {
    MinHeap<T> h;
    for (T element : arr) {
        h.insert(element);
        vector<T> data = h.getArray();
        for (int i = 0; i < data.size(); i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
    int index = 0;
    while(!h.empty()) {
        arr[index] = h.removeRoot();
        cout << endl;
        index++;
    }
    // TODO: Insert all elements into heap using sift-down insert from lecture

    // TODO: Repeatedly remove root and store back into array
}

int main() {
    vector<int> arr = {5, 1, 9, 3, 7, 4};

    heapsort(arr);

    for (int x : arr)
        cout << x << " ";
    cout << endl;

    return 0;
}
