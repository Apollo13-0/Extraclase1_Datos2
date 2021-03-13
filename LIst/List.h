//
// Created by ignacio on 7/3/21.
//

#ifndef EXTRACLASE1_DATOS2_LIST_H
#define EXTRACLASE1_DATOS2_LIST_H


#include "../Node/Node.h"
#include "../Collector/Collector.h"


class List {

private:
    Node *head;
    int size;

public:

    List();

    void insert(int, Collector collector);

    bool is_empty();

    bool find(int value);

    void print_list();

    Node *getHead() const;

    void setHead(Node *head);

    int getSize() const;

    void setSize(int size);

    void delete_list(int value, Collector collector);



};


#endif //EXTRACLASE1_DATOS2_LIST_H
