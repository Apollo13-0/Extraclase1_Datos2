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
    cout<<"MI valor:"<<value<<endl;
    return 0;
}

void Node::set_value(int newValue) {
    value = newValue;
    // ver como cambiar en memoria esto
}

int Node::get_ptrNext() {
    cout<<"Mi puntero;"<<ptr_next<<endl;
    return 0;
}

void Node::set_ptrNext(Node* newPtr) {
    ptr_next = newPtr;
    // ver como cambiar en memoria
}

// agregar metodos setNext y getNExt
#include "Node.h"
