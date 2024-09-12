//
// Created by JeremyChoi on 2024/9/10.
//

#ifndef LINKED_LIST_LIST_H
#define LINKED_LIST_LIST_H
#include <iostream>
#include "Node.cpp"



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
    void replaceFirstFound(T target, T replace);
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
