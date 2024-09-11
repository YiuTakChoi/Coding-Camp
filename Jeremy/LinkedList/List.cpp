//
// Created by JeremyChoi on 2024/9/11.
//
#include "List.h"

/**
 * Default Constructor.
 * */
template <typename T>
List<T>::List(){
    this->head = new Node<T>();
    this->tailNode = this->head;
    this->length = 0;
}

/**
 * Constructor with initial value (not recommended since head should not be used to store any value).
 * */
template <typename T>
List<T>::List(T firstValue) {
    this->head = new Node(firstValue);
    this->tailNode = this->head;
    this->length = 0;
}

/**
 * Returns the index of the target, -1 and the final counter++ are invalid outputs.
 * -1: The list is empty.
 * return counter++ when loop ends: The target is not within the scope of current list object.
 * */
template <typename T>
int List<T>::findValue(T target){
    if(this->head == NULL){
        return -1;
    }
    Node<T>* current = this->head;
    int counter = 0;
    while(current){
        if(current->getValue() == target){
            return counter;
        }
        counter++;
        current = current->getNext();
    }
    return counter++;
};

/**
 * Returns the length of current List object.
 * */
template <typename T>
[[nodiscard]] int List<T>::getLength() const{
    return this->length;
};

/**
 * Add a new element to the end of the List object.
 * */
template <typename T>
void List<T>::pushBack(T value){
    Node<T>* currentNode = new Node(value);
    tailNode->setNext(currentNode);
    currentNode->setNext(NULL);
    this->tailNode = currentNode;
    this->length++;
}

/**
 * Add a new element to the designated index of the List object.
 * */
template <typename T>
void List<T>::pushInCertainIndex(int index, T value){
    if(index < 0 || index >= this->length)
        return;
    Node<T>* previous = this->head;
    for(int i = 0; i < index; i++){
        previous = previous->getNext();
    }
    Node<T>* current = new Node(value);
    current->setNext(previous->getNext());
    previous->setNext(current);
}

/**
 * Print the elements within current List object.
 * */
template <typename T>
void List<T>::printList() {
    Node<T>* current = this->head->getNext();
    if(!current){
        std::cout << "No Element" << std::endl;
        return;
    }
    while(current){
        std::cout << current->getValue();
        current = current->getNext();
    }
}