//
// Created by ignacio on 7/3/21.
//

#include <iostream>
#include "List.h"

using namespace std;

// Constructor

List::List() {
    head = NULL;
    size = 0;
}

int List::isEmpty() {
    if (size == 0){
        cout<<"Esta vacio"<<endl;
    } else{
        cout<<"No essta vacio tiene"<<size<<"elementos"<<endl;
    }
    return 0;
}