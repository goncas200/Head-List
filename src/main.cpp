/*
    main.cpp
    Copyright (C) 2026 Gonçalo João. All Rights Reserved.
*/

#include <iostream>

template <class t>
struct llist {
    llist<t>* next = nullptr;
    t value;
    llist() {
    }
    llist(t value) {
        this->value = value;
    }
    ~llist() {
    }
};

template<class t>
void close_list(llist<t>*& a) {
    if (a == nullptr)
        return;
    llist<t>* current = a;
    while (current->next != nullptr) {
        llist<t>* temp = current;
        current = current->next;
        delete temp;
    }
    delete current;
    a = nullptr;
}

template<class t>
void add(t value, llist<t>*& add_to) {
    if (add_to == nullptr)
        return;
    llist<t>* temp = new llist<t>(value);
    temp->next = add_to;
    add_to = temp;
}

template<class t>
t find(int a, llist<t>* list) {
    for (int i = 0; i < a; ++i) {
        list = list->next;
    }
    return list->value;
}

int main() {
    std::cout << "Hello\n";
    llist<int>* head = new llist<int>(1);
    add(1093, head);
    std::cout << find(1, head) << "\n" << find(0, head) << "\n";
    close_list(head);
    return 0;
}