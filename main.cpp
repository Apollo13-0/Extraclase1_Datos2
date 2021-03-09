#include <iostream>
#include "Node.h"
#include "List.h"

using namespace std;

// ----------------------- MAIN ------------------------
int main() {
    Node n1 = Node(15);
    n1.get_value();

    Node n2 = Node(1435);
    n1.set_value(55);
    n2.get_value();
    n1.get_value();
    n1.get_ptrNext();

    List l1 = List();
    l1.isEmpty();
    return 0;
}