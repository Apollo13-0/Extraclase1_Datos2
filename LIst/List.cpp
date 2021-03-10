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

Node *List::getHead() const {
    return head;
}

void List::setHead(Node *head) {
    List::head = head;
}

int List::getSize() const {
    return size;
}

void List::setSize(int size) {
    List::size = size;
}

bool List::is_empty() {
    if (size == 0){
        return true;
    } else  {
        return false;
    }
}

void List::insert(int data){
    // pasarlo al new sobreescrito
    if (is_empty()){
        Node *tmp = new Node(data);
        head = tmp;
    } else {
        Node *new_node = new Node(data);

        new_node->setPtrNext(head);
        head = new_node;
    }
    size++;
}


void List::print_list() {
    Node *tmp = head;
    if (!head){
        cout<<"La lista està vacìa"<<endl;
    } else {
        while (tmp != NULL){
            tmp->print();
            tmp = tmp->getPtrNext();
        }
    }
}
