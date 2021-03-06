#include <iostream>

using namespace std;

class Node{
    private:
        int value;
        int ptr_next;
    public:
        Node(int);
        int get_value();
        void set_value(int);
        int get_ptrNext();
        void set_ptrNext(int);
//        void new() override;
//        void delete() override;
};

// Constructor

Node::Node(int _value) {
    value = _value;
    ptr_next = NULL;
}

int Node::get_value(){
    cout<<"MI valor:"<<value<<endl;
    return 0;
}

void Node::set_value(int newValue) {
    value = newValue;
    // ver como cambiar en memoria esto
}

int Node::get_ptrNext() {
    cout<<"Mi puntero;"<<ptr_next<<endl;
    return 0;
}

void Node::set_ptrNext(int newPtr) {
    ptr_next = newPtr;
    // ver como cambiar en memoria
}
int main() {
    Node n1 = Node(15);
    n1.get_value();

    Node n2 = Node(1435);
    n1.set_value(55);
    n2.get_value();
    n1.get_value();
    return 0;
}