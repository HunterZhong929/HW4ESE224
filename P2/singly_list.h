#ifndef Singly_LIST_H
#define Singly_LIST_H

#include "Singly_node.h"

class SinglyList {
    // Members
    SinglyNode* head;
    SinglyNode* tail;

  public:
    // Constructor
    SinglyList();
    // Destructor
    ~SinglyList();

    // Methods
    void add_to_end(std::string s);
    void add_to_front(std::string s);
    std::string pop_end();
};

#endif //Singly_LIST_H