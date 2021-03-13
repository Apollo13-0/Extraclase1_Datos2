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

//void *Node::operator new(size_t size) {
//     //hacer llegar el collector
//    Collector& free_node = Collector::getInstance();
//    if (free_node.find_memory()){
//        cout << "creeando espacio"<<endl;
//        void *ptr = NULL;
//        ptr = malloc(size);
//        return ptr;
//    }
//    else {
//        cout << "reciclando"<< endl;
//        //Node tmp = free_node.collector_delete();
//        //return &tmp;
//    }
//}

void Node::operator delete(void *delete_ptr) {
    //Collector *free_node = new Collector();
    //Collector& collector_list = Collector::getInstance();
//    if (collector_list.find_memory()){
//        cout<<delete_ptr<<endl;
//        collector_list.insert(delete_ptr);
//    }


}

