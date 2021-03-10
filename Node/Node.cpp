//
// Created by ignacio on 7/3/21.
//



#include <iostream>
#include "Node.h"
using namespace std;


Node::Node() {
    value = NULL;
    ptr_next = NULL;
}

Node::Node(int data) {
    value = data;
    ptr_next = NULL;
}

void Node::print() {
    cout << "Nodo:  " << value << "    Direccion    " << this << "  Sigueinte: " << ptr_next << endl;
}

Node *Node::getPtrNext() const {
    return ptr_next;
}

void Node::setPtrNext(Node *ptrNext) {
    ptr_next = ptrNext;
}

int Node::getValue() const {
    return value;
}

void Node::setValue(int value) {
    Node::value = value;
}
//
//void *Node::operator new(size_t size) {
//    if (true){
//        Node *tmp = new Node();
//        return tmp;
//    }
//}


