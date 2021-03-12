//
// Created by ignacio on 7/3/21.
//

#include "Collector.h"
#include "../Collector/CollectorNode.h"
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
        // logica para incertar un nuevo nodo NEW GLOBAL
    } else {
        return false;
        // usar direccion para almaceanr objeto

        // eliminar de la lista
    }
}

void Collector::insert(Node data) {
    //CollectorNode *tmp = new CollectorNode(data);

    if (isEmpty()){
        head = &data;
        cout << "collector insert is empty" << endl;
    } else {
        data.setPtrNext(head);
        head = &data;
        cout << "collector insert new head" << endl;
//        tmp->setCollectorNext(head);
//        head = tmp;
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
    if (isEmpty()){
        cout << "No hay elementos por eliminar en Collector"<<endl;
    } else {
        Node *tmp3 = head;
        head = tmp3->getPtrNext();
        tmp3->setPtrNext(NULL);
        return *tmp3;

//        CollectorNode *tmp = getHead();
//        head = tmp->getCollectorNext();
//        tmp->setCollectorNext(NULL);
//
//        Node tmp2 = tmp->getNodeDeleted();
//        tmp2.setPtrNext(NULL);
//        return tmp2;
    }
}

Collector *Collector::getInstance() {
    if (instance == NULL) {
        instance = new Collector();
    }
    return instance;
}


