//
// Created by ignacio on 7/3/21.
//

#ifndef EXTRACLASE1_DATOS2_LIST_H
#define EXTRACLASE1_DATOS2_LIST_H


#include "../Node/Node.h"

class List {
    private:
        int size;
        Node *head;

    public:
        List();
        bool isEmpty();
        void insert(int);
        int find();
        void print_list();

};


#endif //EXTRACLASE1_DATOS2_LIST_H
