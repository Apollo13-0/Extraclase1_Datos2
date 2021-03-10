//
// Created by ignacio on 7/3/21.
//

#ifndef EXTRACLASE1_DATOS2_NODE_H
#define EXTRACLASE1_DATOS2_NODE_H


class Node {

    private:

        int value;
        Node *ptr_next;

    public:

        Node();

        int get_value();
        void set_value(int);

        Node *get_ptrNext() const;
        void set_ptrNext(Node newPtr);

        //void* operator new(size_t size, int ele);
        //void operator delete(int node);

};

#endif
//EXTRACLASE1_DATOS2_NODE_H
