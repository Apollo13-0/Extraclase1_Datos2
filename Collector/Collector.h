//
// Created by ignacio on 7/3/21.
//

#ifndef EXTRACLASE1_DATOS2_COLLECTOR_H
#define EXTRACLASE1_DATOS2_COLLECTOR_H


#include "CollectorNode.h"
#include <iostream>

class Collector {

    private:
        Node *head;
        int size;
        static Collector *instance;

    protected:
        Collector();
        Collector(Collector const&);
        Collector& operator=(Collector const&);
    public:

        //Collector();
        static Collector *getInstance();

        bool isEmpty();

        bool find_memory();

        void insert(Node pointer);

        Node collector_delete();

        CollectorNode *getHead() const;

        void setHead(CollectorNode *head);

        int getSize() const;

        void setSize(int size);



};

Collector* Collector::instance=NULL;

#endif //EXTRACLASE1_DATOS2_COLLECTOR_H
