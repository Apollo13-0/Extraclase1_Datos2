//
// Created by ignacio on 8/3/21.
//
//
//#include "CollectorNode.h"
//#include <iostream>
//
//using namespace std;
//
//CollectorNode::CollectorNode() {
//    node_deleted = NULL;
//    collector_next = NULL;
//}
//
//void CollectorNode::print() {
//    cout << "Nodo eliminado:  " << node_deleted.getValue() << "    Direccion    " << this << "  Sigueinte: " << collector_next << endl;
//}
//
//CollectorNode::CollectorNode(Node deleted_node) {
//    node_deleted = deleted_node;
//    collector_next = NULL;
//}
//
//CollectorNode *CollectorNode::getCollectorNext() const {
//    return collector_next;
//}
//
//void CollectorNode::setCollectorNext(CollectorNode *collectorNext) {
//    collector_next = collectorNext;
//}
//
//Node CollectorNode::getNodeDeleted() const {
//    return node_deleted;
//}
//
//void CollectorNode::setNodeDeleted(const Node nodeDeleted) {
//    CollectorNode::node_deleted = nodeDeleted;
//}