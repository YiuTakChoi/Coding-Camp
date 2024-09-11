//
// Created by JeremyChoi on 2024/9/10.
//

#ifndef LINKED_LIST_LIST_H
#define LINKED_LIST_LIST_H
#include <iostream>

class Node{
private:
    int data;
    Node* next;
public:

    Node() {
        this->next = NULL;
    };

    Node(int firstValue) {
        this->data = firstValue;
        this->next = NULL;
    };

    ~Node(){
        std::cout << "======Current node has been released with value of " << this->data << " has been released======" << std::endl;
    };

    [[nodiscard]]int getValue() const{
        return this->data;
    }

    Node* getNext(){
        return this->next;
    }

    void setNext(Node* nextNode){
        this->next = nextNode;
    }
};

class List {
private:
    Node* head;
    int length;
    Node* tailNode;
public:

    /**
     * Default Constructor
     * */
    List(){
        this->head = new Node();
        this->tailNode = this->head;
        this->length = 0;
    };

    /**
     * Constructor with initial value (not recommended since head should not be used to store any value).
     * */
    List(int firstValue){
        this->head = new Node(firstValue);
        this->tailNode = this->head;
        this->length = 0;
    };

    /**
     * Destructor: Releasing resources obtained by current object when deleting it.
     * */
    ~List(){
        std::cout << "======The List object has been destructed======" << std::endl;
    };

    /**
     * Returns the index of the target, -1 and the final counter++ are invalid outputs
     * -1: The list is empty.
     * return counter++ when loop ends: The target is not within the scope of current list object
     * */
    int findValue(int target){
        if(this->head == NULL){
            return -1;
        }
        Node* current = this->head;
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

    [[nodiscard]] int getLength() const{
        return this->length;
    };
    void findAndReplaceValue(int target, int replace){

    };

    void pushBack(int value){
        Node* currentNode = new Node(value);
        tailNode->setNext(currentNode);
        currentNode->setNext(NULL);
        this->tailNode = currentNode;
        this->length++;
    };

    void pushInCertainIndex(int index, int value){
        if(index < 0 || index >= this->length)
            return;
        Node* previous = this->head;
        for(int i = 0; i < index; i++){
            previous = previous->getNext();
        }
        Node* current = new Node(value);
        current->setNext(previous->getNext());
        previous->setNext(current);
    };

//    void deletePosition(int index){
//        if(index < 0 || index >= this->length)
//            return;
//        int counter = 0;
//        Node* previous = this->head;
//
//    };

    void printList(){
        Node* current = this->head->getNext();
        if(!current){
            std::cout << "No Element" << std::endl;
            return;
        }
        while(current){
            std::cout << current->getValue();
            current = current->getNext();
        }
    };

};


#endif //LINKED_LIST_LIST_H
