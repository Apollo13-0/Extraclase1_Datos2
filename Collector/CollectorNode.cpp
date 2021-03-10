//
// Created by ignacio on 8/3/21.
//

#include "CollectorNode.h"

//CollectorNode::CollectorNode() {
//    node_deleted;
//    collector_next = NULL;
//}

CollectorNode *CollectorNode::getCollectorNext() const {
    return collector_next;
}

void CollectorNode::setCollectorNext(CollectorNode *collectorNext) {
    collector_next = collectorNext;
}

Node &CollectorNode::getNodeDeleted() const {
    return (Node &) node_deleted;
}

void CollectorNode::setNodeDeleted(const Node &nodeDeleted) {
    node_deleted = nodeDeleted;
}