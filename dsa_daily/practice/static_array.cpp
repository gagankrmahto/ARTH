#include<iostream>
using namespace std;
int  main(){
    int size ;
    cout<<"enter the size: ";
    cin>>size;
    int arr[size];
    cout<<sizeof(arr);
    cout<<endl<<"Enter new size : ";
    int new_size;
    cin>>new_size ;
    int arr[new_size];
    return 0;

}