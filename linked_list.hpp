#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

#include <string>
#include "i_link.hpp"

template <typename T>
struct ListNode {
    T value;
    ListNode<T>* next;
};

template <typename T>
class LinkedList : public ILink<T> {
    private:
        ListNode<T>* head_;
        ListNode<T>* tail_;
        int size_;
    public:
        LinkedList();
        LinkedList(T value);
        // ~LinkedList();

        ListNode<T>* getHead();
        ListNode<T>* getTail();
        int getSize();

        bool exists(T value) override;
        void add(T value) override;
        void remove() override;
        void remove(T value) override;
        std::string toString() override;
};

#endif
