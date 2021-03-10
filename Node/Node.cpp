//
// Created by ignacio on 7/3/21.
//



#include <iostream>
#include "Node.h"
using namespace std;

// Constructor
Node::Node() {
    value = NULL;
    ptr_next = NULL;
    cout<<"node1"<<endl;
}

int Node::get_value(){
    //cout << "nodo creado: "<<value<< endl;
    return value;
}

void Node::set_value(int newValue) {
    value = newValue;
    // ver como cambiar en memoria esto
}

Node *Node::get_ptrNext() const{
    return ptr_next;
}

void Node::set_ptrNext(Node newPtr) {
    ptr_next = &newPtr;
    // ver como cambiar en memoria
}

//void *Node::operator new(size_t size, int ele) {
//
//}


