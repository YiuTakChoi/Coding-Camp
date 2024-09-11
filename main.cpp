#include <iostream>
#include "Jeremy/LinkedList/List.cpp"
int main() {
    auto myList = new List<int>();
    myList->pushBack(1);
    myList->pushBack(2);
    myList->pushInCertainIndex(1, 5);
//    std::cout << myList->findValue(1);
//    std::cout << myList->getLength();
    myList->printList();
    std::cout << std::endl;
//    std::cout << "Hello, World!" << std::endl;
    delete(myList);
    return 0;
}
