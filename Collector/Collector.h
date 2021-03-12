//
// Created by ignacio on 7/3/21.
//

#ifndef EXTRACLASE1_DATOS2_COLLECTOR_H
#define EXTRACLASE1_DATOS2_COLLECTOR_H


//#include "CollectorNode.h"
#include "../Node/Node.h"
#include <iostream>

class Collector {

    private:
        Node *head;
        int size;
        static Collector instance;
        Collector();

//    protected:
//        Collector();
//        static Collector* collector_;

//        Collector(Collector const&);
//        Collector& operator=(Collector const&);
    public:

        Collector(const Collector&) = delete;
//        void operator=(const Collector &)=delete;

        //Collector();
        static Collector& getInstance();

        bool isEmpty();

        bool find_memory();

        void insert(void *pointer);

        Node collector_delete();

        //CollectorNode *getHead() const;

        //void setHead(CollectorNode *head);

        int getSize() const;

        void setSize(int size);


    //Collector();
};

Collector Collector::instance;

#endif //EXTRACLASE1_DATOS2_COLLECTOR_H
