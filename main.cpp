#include <iostream>
#include "Node.h"

using namespace std;


class Collector{

};
// ----------------------- MAIN ------------------------
int main() {
    Node n1 = Node(15);
    n1.get_value();

    Node n2 = Node(1435);
    n1.set_value(55);
    n2.get_value();
    n1.get_value();
    return 0;
}