template <typename T>
int MinHeap<T>::siftUp(int i) {
    // TODO: Move element at index i upward until heap property restored
    while(1) {
        if (i == 0 || data[parent(i)] < data[i]) {
            return i;
        }
        T temp = data[parent(i)];
        data[parent(i)] = data[i];
        data[i] = temp;
        i = parent(i);
    }
}

template <typename T>
int MinHeap<T>::siftDown(int i) {
    // TODO: Move element at index i downward until heap property restored
    while (1) {
        if (left(i) >= data.size()) {
            return i;
        }
        int smallest = i;
        if (data[left(i)] < data[smallest]) {
            smallest = left(i);
        }
        if (right(i) < data.size() && data[right(i)] < data[smallest]) {
            smallest = right(i);
        }
        if (smallest == i) {
            return i;
        } else if (smallest == left(i)) {
            int temp = data[i];
            data[i] = data[left(i)];
            data[left(i)] = temp;
            i = left(i);
        } else if (smallest == right(i)) {
            int temp = data[i];
            data[i] = data[right(i)];
            data[right(i)] = temp;
            i = right(i);
        }

        
    }

}

template <typename T>
void MinHeap<T>::insert(const T& value) {
    data.push_back(value);
    siftUp(data.size()-1);
}

template <typename T>
T MinHeap<T>::removeRoot() {
    // TODO: Implement removing the root element.

    if (data.size() <= 0) {
        throw string("removeRoot error: no elements to remove");
    }
    T rootValue = data[0];
    data[0] = data[data.size()-1];
    data.pop_back();
    siftDown(0);
    return rootValue;
}

template <typename T>
void MinHeap<T>::removeAt(int index) {
    if (index < 0 || index >= size())
        throw runtime_error("Invalid index");

    swap(data[index], data.back());
    data.pop_back();

    if (index == data.size()) {
        return;
    }

    index = siftUp(index);
    index = siftDown(index);
    // TODO: Attempt sift-up then 
    // sift-down to restore heap property
}

template <typename T>
bool MinHeap<T>::verifyHeap() const {
    for (int i = 1; i < size(); i++) {
        if (data[i] < data[parent(i)]) {
            return false;
        }
    }
    return true;
}