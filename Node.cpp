//
// Created by ignacio on 7/3/21.
//

// Constructor

#include <iostream>
#include "Node.h"
using namespace std;

Node::Node(int _value) {
    value = _value;
    ptr_next = NULL;
}

int Node::get_value(){
    return value;
}

void Node::set_value(int newValue) {
    value = newValue;
    // ver como cambiar en memoria esto
}

Node *Node::get_ptrNext() const{
    return ptr_next;
}

void Node::set_ptrNext(Node *newPtr) {
    ptr_next = newPtr;
    // ver como cambiar en memoria
}

void* Node::operator new(size_t size) {
//    if (find_memory()){
//        //logica para usar el espacio en el collector
//    } else {
//        void *tmp = malloc(sizeof(size));
//        return tmp;
//    }
}

//void Node::operator delete(int node) {
//
//}

