//
// Created by ignacio on 7/3/21.
//

#ifndef EXTRACLASE1_DATOS2_LIST_H
#define EXTRACLASE1_DATOS2_LIST_H


#include "Node.h"

class List {
    private:
        Node *head;
        int size;

    public:
        List();
        int isEmpty();
        void insert(int);
        int find();
    //    void set_ptrNext(int);
    //        void new() override;
    //        void delete() override;

};


#endif //EXTRACLASE1_DATOS2_LIST_H
