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

void List::insert(int data, Collector collector){
    // pasarlo al new sobreescrito
    if (is_empty()){
        if (collector.find_memory()){
            cout<<"l1 vaciaaaaaaa"<< endl;
            Node *tmp = new Node(data);
            this->head = tmp;
        } else{
            Node tmp2 = collector.collector_delete();
            tmp2.setValue(data);
            this->head = &tmp2;
        }
    } else {
        if (collector.find_memory()){
            Node *new_node = new Node(data);
            new_node->setPtrNext(head);
            this->head = new_node;
        } else{
            cout << "insertt-------------------------------------------------------------*****"<< endl;
            Node tmp3 = collector.collector_delete();
            tmp3.setValue(data);
            tmp3.setPtrNext(head);
            this->head = &tmp3;
        }
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

bool List::find(int value) {
    Node *tmp = head;
    bool result = false;
    if (!head){
        result = false;
        return result;
    } else {
        while (tmp != NULL){
            if (tmp->getValue() == value){
                result = true;
                break;
            } else {
                tmp = tmp->getPtrNext();
                result = false;
            }
        }
        return result;
    }
}

void List::delete_list(int value, Collector collector) {
    if (this->find(value)){
        Node *tmp = head;
        Node *tmp2 = head;
        while (tmp != NULL){
            if (tmp->getValue() == value){
                if (tmp == this->head){
                    this->head = this->head->getPtrNext();
                    collector.insert(tmp);
                } else {
                    tmp2->setPtrNext(tmp->getPtrNext());
                    collector.insert(tmp);
                }
                //cout << "Nodo eliminado:   "<< tmp<< endl;


                //tmp->operator delete(tmp);
                cout << "eliminado:  " << value << "    "<< tmp <<endl;
                break;
            } else {
                tmp2 = tmp;
                tmp = tmp->getPtrNext();
            }
        }
    }

}
