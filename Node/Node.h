//
// Created by ignacio on 7/3/21.
//

#ifndef EXTRACLASE1_DATOS2_NODE_H
#define EXTRACLASE1_DATOS2_NODE_H

#include <stddef.h>
//#include "../Collector/Collector.h"

class Node {

private:

    int value;
    Node *ptr_next;

public:


    Node();
    Node(int);

    void print();

    Node *getPtrNext() const;

    void setPtrNext(Node *ptrNext);

    int getValue() const;

    void setValue(int value);

    //void* operator new(size_t size);
    void operator delete(void *delete_ptr);
};

#endif
//EXTRACLASE1_DATOS2_NODE_H
