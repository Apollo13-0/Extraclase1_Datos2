#include <iostream>
#include "Node/Node.h"
#include "LIst/List.h"


using namespace std;

// ----------------------- MAIN ------------------------


int main() {
    int ele;
    int dim;
    int pos;
    cout << "Agrega un elemento por la cabeza: " << endl;
    cin >> ele;

    List l1 = List();
    l1.insert(ele);

    cout << "Agrega un elemento por la cabeza: " << endl;
    cin >> ele;
    l1.insert(ele);
    cout << "Agrega un elemento por la cabeza: " << endl;
    cin >> ele;
    l1.insert(ele);
    l1.print_list();
    cout << "Eliminar un elemento por la cabeza: " << endl;
    cin >> ele;

    return 0;
}