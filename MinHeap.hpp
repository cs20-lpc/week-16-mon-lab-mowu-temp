#pragma once
#include <vector>
#include <stdexcept>
using namespace std;

template <typename T>
class MinHeap {
private:
    vector<T> data;   // complete binary tree stored in array

    int parent(int i) const { return (i - 1) / 2; }
    int left(int i) const { return 2 * i + 1; }
    int right(int i) const { return 2 * i + 2; }

    int siftUp(int i);
    int siftDown(int i);

public:
    MinHeap() {}

    void insert(const T& value);
    T removeRoot();
    void removeAt(int index);
    int size() const { return data.size(); }
    bool empty() const { return data.empty(); }
    const vector<T>& getArray() const { return data; }
    bool verifyHeap() const;
};

#include "MinHeap.tpp"