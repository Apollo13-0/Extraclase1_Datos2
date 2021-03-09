//
// Created by ignacio on 7/3/21.
//

#include <iostream>
#include "List.h"

using namespace std;

// Constructor

List::List() {
    head = NULL;
    size = 0;
}

bool List::isEmpty() {
    if (size == 0){
        return true;
    } else{
        return false;
    }
}

void List::insert(int data){
    // pasarlo al new sobreescrito

    if (!head){
        //head = new_node;
        if (!find_memory()){
            Node tmp = Node(data);
            head = &tmp;
        } else {
            //collector.use_ptr(direct);
        }

        // agregar logica de punteros
    } else {
        if (!find_memory()){
            //collector.new_global()
        } else {
            //collector.use_ptr(direct)
        }
        //new_node->get_ptrNext() = &head;  // asignar la direc del head al nuevo numero
        //head = new_node;
    }

}