#include <iostream>
#include "Jeremy/LinkedList/List.cpp"
int main() {
    auto myList = new List<int>();
    myList->pushBack(1);
    myList->pushBack(2);
    myList->pushAfterCertainIndex(myList->getLength(), 5);
//    std::cout << myList->findValue(5) << std::endl;
//    std::cout << myList->getLength();
    myList->printList();
    std::cout << std::endl;
//    std::cout << "Hello, World!" << std::endl;
    delete(myList);
    return 0;
}
