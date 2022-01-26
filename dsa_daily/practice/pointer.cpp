#include <iostream>
using namespace std;
int main(){

    // int x;
    // x = 12;
    // int *y;
    // y = & x ;
    // cout<<x<<endl;
    // cout<<"&x "<<&x<<endl;
    // cout<<"y "<<y<<endl;
    // cout<<"&y "<<&y<<endl;
    // cout<<"*y "<<*y<<endl;
    int sonam;//declare
    sonam = 853;//initialize   
    int *sks; //pointer declare
    sks=&sonam; 
    cout<<"my output"<<endl;
    cout<<"&sonam "<<&sonam<<endl;
    cout<<"sonam "<<sonam<<endl;
    cout<<"sks "<<sks<<endl;
    cout<<"&sks "<<&sks<<endl;
    cout<<"*sks "<<*sks<<endl;
    *sks = *sks + 1;
    
    cout<<endl<<"my new output"<<endl;
    cout<<"sks "<<sks<<endl;
    cout<<"sonam "<<sonam<<endl;
    cout<<"&sks "<<&sks<<endl;
    cout<<"*sks "<<*sks<<endl;
    sks = sks + 1;
        cout<<endl<<"my new output"<<endl;
    cout<<"sks "<<sks<<endl;
    cout<<"sonam "<<sonam<<endl;
    cout<<"&sks "<<&sks<<endl;
    cout<<"*sks "<<*sks<<endl;
    return 0;
}