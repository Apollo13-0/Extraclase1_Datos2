//
// Created by ignacio on 7/3/21.
//

#ifndef EXTRACLASE1_DATOS2_COLLECTOR_H
#define EXTRACLASE1_DATOS2_COLLECTOR_H


#include "../Node/Node.h"
#include "../Collector/CollectorNode.h"

class Collector {

    private:
        CollectorNode *head;
        int size;
    public:

        Collector();

        bool isEmpty();

        bool find_memory();

        void insert(Node);

        Node collector_delete();

        CollectorNode *getHead() const;

        void setHead(CollectorNode *head);

        int getSize() const;

        void setSize(int size);



};


#endif //EXTRACLASE1_DATOS2_COLLECTOR_H
