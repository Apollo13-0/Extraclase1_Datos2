#include <iostream>
#include "Node/Node.h"
#include "LIst/List.h"


using namespace std;

// ----------------------- MAIN ------------------------


int main() {
    int ele;
    int dim;
    int pos;

    Collector c1 = Collector();

    List l1 = List();

    cout << "Agrega un elemento por la cabeza: " << endl;
    cin >> ele;
    l1.insert(ele, c1);

    cout << "Agrega un elemento por la cabeza: " << endl;
    cin >> ele;
    l1.insert(ele, c1);

    cout << "Agrega un elemento por la cabeza: " << endl;
    cin >> ele;
    l1.insert(ele, c1);

    //Imprimir lista
    l1.print_list();

    //ELiminar un nodo
    cout << "Eliminar un elemento por la cabeza: " << endl;
    cin >> ele;

    l1.delete_list(ele, c1);

    cout << "Eliminar un elemento por la cabeza: " << endl;
    cin >> ele;

    l1.delete_list(ele, c1);
    cout << "------------ Collector ------------" << endl;
    c1.print_collector();

    cout << "------------ Lista ------------" << endl;
    //Imprimir lista
    l1.print_list();

    cout << "Agrega un elemento por la cabeza: " << endl;
    cin >> ele;
    l1.insert(ele, c1);

    //Imprimir lista
    l1.print_list();
    cout << "------------ Collector ------------" << endl;
    c1.print_collector();

    return 0;
}