//
// Created by ignacio on 7/3/21.
//

#include "Collector.h"
#include <iostream>

using namespace std;

Collector::Collector() {
    head = NULL;
    size = 0;
}

bool Collector::isEmpty() {
    if (size == 0){
        return true;
    } else {
        return false;
    }
}

bool Collector::find_memory() {
    if (isEmpty()){
        return true;
    } else {
        return false;
    }
}

void Collector::insert(Node* data) {
    if (this->isEmpty()){
        this->head = data;
        //cout << "collector insert is empty  " << head <<endl;
    } else {
        data->setPtrNext(head);
        this->head = data;
        //cout << "collector insert new head" << endl;
    }
    size++;
}

//CollectorNode *Collector::getHead() const {
//    return head;
//}
//
//void Collector::setHead(CollectorNode *head) {
//    Collector::head = head;
//}

int Collector::getSize() const {
    return size;
}

void Collector::setSize(int size) {
    Collector::size = size;
}

Node Collector::collector_delete() {
    //cout << "print delle   " << head << endl;
    Node *tmp3 = head;
    head = tmp3->getPtrNext();
    tmp3->setPtrNext(NULL);
    size--;
    return *tmp3;
//    if (isEmpty()){
//        Node *tmp = new Node();
//        size--;
//        return *tmp;
//    } else {
//        Node *tmp3 = head;
//        head = tmp3->getPtrNext();
//        tmp3->setPtrNext(NULL);
//        size--;
//        return *tmp3;
//    }
}

void Collector::print_collector() {
    Node *tmp = this->head;
    //cout << "print collecitor   " << this->head << endl;
    if (!this->head){
        cout<<"EL collector està vacìo"<<endl;
    } else {
        while (tmp != NULL){
            tmp->print();
            tmp = tmp->getPtrNext();
        }
    }

}

//Collector &Collector::getInstance() {
////    if (instance == nullptr) {
////        instance = new Collector();
////    }
//    return instance;
//}


