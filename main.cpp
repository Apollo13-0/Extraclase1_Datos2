#include <iostream>
#include "Node/Node.h"
#include "LIst/List.h"

using namespace std;

// ----------------------- MAIN ------------------------
int main() {
    int ele;
    int dim;
    int pos;
    //cout << "Agrega un elemento por la cabeza: " << endl;
    //cin >> ele;
//    Node n1 = Node(ele);
//    n1.get_value();
//
//    Node n2 = Node(1435);
//    n1.set_value(55);
//    n2.get_value();
//    n1.get_value();
//    n1.get_ptrNext();

    List l1 = List();
    l1.insert(22);
    l1.insert(12);
    l1.insert(45);
    l1.print_list();

    return 0;
}