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
    if (isEmpty()){
        head = new Node();
        head->set_value(data);
        cout<<"primer nodo:  "<<head<<endl;

    } else {
        Node *new_node = new Node();
        new_node->set_value(data);

        new_node->set_ptrNext(*head);
        head = new_node;
        cout<<"insertado  "<<head<<endl;
    }
    size++;

//    if (!head){
//        //head = new_node;
//        if (!find_memory()){
//            Node tmp = Node(data);
//            head = &tmp;
//        } else {
//            //collector.use_ptr(direct);
//        }
//
//        // agregar logica de punteros
//    } else {
//        if (!find_memory()){
//            //collector.new_global()
//        } else {
//            //collector.use_ptr(direct)
//        }
//        //new_node->get_ptrNext() = &head;  // asignar la direc del head al nuevo numero
//        //head = new_node;
//    }

}

void List::print_list() {
    Node *tmp = head;
    if (!head){
        cout<<"La lista està vacìa"<<endl;
    } else {
        while (tmp != NULL){
            cout << tmp->get_value() << "  "<< tmp->get_ptrNext()<<endl;
            tmp = tmp->get_ptrNext();
        }
    }
}
