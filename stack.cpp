// Stack.cpp
#include <stdexcept>
#ifndef STACK_H
#define STACK_H

template <typename T>
class Stack {
public:
    Stack() {
        topOfStack = -1;
        items = new T[CAPACITY];
    }

    ~Stack() {
        delete[] items;
    }

    bool empty() const {
        return topOfStack == -1;
    }

    void clear() {
        topOfStack = -1;
    }

    void push(const T& item) {
        if (topOfStack < CAPACITY - 1) {
            items[++topOfStack] = item;
        }
    }

    const T& top() const {
        if (!empty()) {
            return items[topOfStack];
        }
        throw std::out_of_range("Stack is empty.");
    }

    void pop() {
        if (!empty()) {
            --topOfStack;
        }
    }

    static const int CAPACITY = 50;

private:
    int topOfStack;
    T* items;
};

#endif
