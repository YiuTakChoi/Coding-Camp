//
// Created by JeremyChoi on 2024/9/10.
//

#ifndef LINKED_LIST_LIST_H
#define LINKED_LIST_LIST_H
#include <iostream>

template <typename T>class Node{
private:
    T data;
    Node* next;
public:

    Node() {
        this->next = NULL;
    };

    Node(T firstValue) {
        this->data = firstValue;
        this->next = NULL;
    };

    ~Node(){
        std::cout << "======Current node has been released with value of " << this->data << " has been released======" << std::endl;
    };

    [[nodiscard]]T getValue() const{
        return this->data;
    }

    Node* getNext(){
        return this->next;
    }

    void setNext(Node* nextNode){
        this->next = nextNode;
    }
};

template<typename T> class List {
private:
    Node<T>* head;
    int length{};
    Node<T>* tailNode;
public:
    List();
    List(T firstValue);
    /**
     * Destructor: Releasing resources obtained by current object when deleting it.
     * */
    ~List(){
        std::cout << "======The List object has been destructed======" << std::endl;
    };
    int findValue(T target);

    [[nodiscard]] int getLength() const;
    void findAndReplaceValue(int target, int replace);
    void pushBack(T value);
    void pushAfterCertainIndex(int index, T value);
//    void deletePosition(int index){
//        if(index < 0 || index >= this->length)
//            return;
//        int counter = 0;
//        Node* previous = this->head;
//
//    };
    void printList();

};


#endif //LINKED_LIST_LIST_H
