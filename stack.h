#ifndef STACK_H
#define STACK_H
#include <cstddef>
#include <deque>

template <typename T>
class Stack {
public:
    // return the top element of the Stack
    T& top()
    {
        return stack.front();
    }
    // end function template top
    // push an element onto the Stack
    void push(const T& PushValue)
    {
        stack.push_front(PushValue);
    }
    // end function template push
    void pop()
    {
        stack.pop_front();
    }
    // end function template pop
    // determine whether Stack is empty
    bool isEmpty() const
    {
        return stack.empty();
    }
    size_t size() const
    {
        return stack.size();
    }

private:
    std::deque<T> stack;
};
#endif
