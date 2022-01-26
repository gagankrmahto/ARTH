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
    Node *n = a;
    while(n!=NULL){
        cout<<n->data<<endl;
        n = n->next;

    }

    return 0;
}