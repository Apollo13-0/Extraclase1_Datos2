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


    cout << "Agrega un elemento a la lista: " << endl;
    cin >> ele;
    l1.insert(ele, c1);


    cout << "Agrega un elemento a la lista: " << endl;
    cin >> ele;
    l1.insert(ele, c1);


    cout << "Agrega un elemento a la lista: " << endl;
    cin >> ele;
    l1.insert(ele, c1);

    cout << "------------ Lista ------------" << endl;
    //Imprimir lista
    l1.print_list();
    cout << "------------ Lista  *END ------------" << endl;

    //ELiminar un nodo
    cout << "Eliminar un elemento de la lista: " << endl;
    cin >> ele;

    l1.delete_list(ele, c1);

    cout << "Eliminar un elemento de la lista: " << endl;
    cin >> ele;

    l1.delete_list(ele, c1);

    cout << "------------ Lista ------------" << endl;
    //Imprimir lista
    l1.print_list();
    cout << "------------ Lista  *END ------------" << endl;


    cout << "------------ Collector ------------" << endl;
    c1.print_collector();
    cout << "------------ Collector *END ------------" << endl;

    cout << "------------ Lista ------------" << endl;
    //Imprimir lista
    l1.print_list();
    cout << "------------ Lista  *END ------------" << endl;


    cout << "Agrega un elemento a la lista: " << endl;
    cin >> ele;
    l1.insert(ele, c1);


    cout << "------------ Lista ------------" << endl;
    //Imprimir lista
    l1.print_list();
    cout << "------------ Lista  *END ------------" << endl;


    cout << "------------ Collector ------------" << endl;
    c1.print_collector();
    cout << "------------ Collector *END ------------" << endl;

    return 0;
}