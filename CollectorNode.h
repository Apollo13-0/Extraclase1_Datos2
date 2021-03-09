//
// Created by ignacio on 8/3/21.
//

#ifndef EXTRACLASE1_DATOS2_COLLECTORNODE_H
#define EXTRACLASE1_DATOS2_COLLECTORNODE_H


#include "Node.h"

class CollectorNode {
    private:
        Node node_deleted;
        CollectorNode* collector_next;

    public:
        CollectorNode();

        CollectorNode *getCollectorNext() const;

        void setCollectorNext(CollectorNode *collectorNext);

        Node &getNodeDeleted() const;

        void setNodeDeleted(const Node &nodeDeleted);

};


#endif //EXTRACLASE1_DATOS2_COLLECTORNODE_H
