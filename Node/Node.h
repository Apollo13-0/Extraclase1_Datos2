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
    Node(int);

    //int get_value();
    //void set_value(int);

    //Node* get_ptrNext();
    // void set_ptrNext(Node new_ptr);

    void print();

    Node *getPtrNext() const;

    void setPtrNext(Node *ptrNext);

    int getValue() const;

    void setValue(int value);

//        void* operator new(size_t size);
    //void operator delete(Node delete_ptr);

};

#endif
//EXTRACLASE1_DATOS2_NODE_H
