//
// Created by ignacio on 7/3/21.
//

#ifndef EXTRACLASE1_DATOS2_COLLECTOR_H
#define EXTRACLASE1_DATOS2_COLLECTOR_H


#include "../Node/Node.h"
#include "CollectorNode.h"

class Collector {

    private:
        int size;
        CollectorNode* head;

    public:
        Collector();
        bool isEmpty();
        void find_memory();
        void insert();
        Node collector_delete();


};


#endif //EXTRACLASE1_DATOS2_COLLECTOR_H
