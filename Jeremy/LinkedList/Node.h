//
// Created by JeremyChoi on 2024/9/11.
//

#ifndef LINKED_LIST_NODE_H
#define LINKED_LIST_NODE_H
#include <iostream>

template <typename T>class Node{
private:
    T data;
    Node* next;
public:
    Node();
    Node(T firstValue);
    ~Node(){
        std::cout << "======Current node has been released with value of " << this->data << " has been released======" << std::endl;
    };
    [[nodiscard]]T getValue() const;
    Node<T>* getNext();
    void setValue(T input);
    void setNext(Node* nextNode);
};


#endif //LINKED_LIST_NODE_H
