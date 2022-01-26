#include<iostream>
using namespace std;
int main(){
    int A[] = {3,5,6,7};
    cout<<A<<endl;
    cout<<&A<<endl;
    cout<<A+1<<endl;
    cout<<&A<<endl;
    cout<<&A+1<<endl;
    cout<<*(&A+1)-A<<endl;
    cout<<sizeof(A)/sizeof(A[0]);
    return 0;
}