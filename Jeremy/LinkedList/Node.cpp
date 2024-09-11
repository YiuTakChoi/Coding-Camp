//
// Created by JeremyChoi on 2024/9/11.
//

#include "Node.h"

template <typename T>
Node<T>::Node() {
    this->next = NULL;
}

template <typename T>
Node<T>::Node(T firstValue) {
    this->data = firstValue;
    this->next = NULL;
};

template <typename T>
[[nodiscard]]T Node<T>::getValue() const{
    return this->data;
}

template <typename T>
Node<T>* Node<T>::getNext(){
    return this->next;
}

template <typename T>
void Node<T>::setNext(Node* nextNode){
    this->next = nextNode;
}