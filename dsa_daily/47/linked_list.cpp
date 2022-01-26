#include "iostream"
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};

int main(){
    // Node a;//creted on top of stack 
    // a.data = 1234;
    Node *a = new Node();
    Node *b = new Node();
    Node *c = new Node();
    a->data = 11111;
    b->data = 22222;
    c->data = 33333;
    a->next = b;
    b->next = c;
    c->next = NULL;

    cout<<a->data<<endl;
    cout<<b->data<<endl;
    cout<<c->data<<endl;

    cout<<a->next<<endl;
    cout<<b->next<<endl;
    cout<<c->next<<endl;
    return 0;
}