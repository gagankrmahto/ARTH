#include<iostream>
using namespace std ;
int fab(int n){
    if (n==0){
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else{
        return fab(n-1) + fab(n-2);
    }
}

int main(){
    int num;
    cout<<"Enter the number to find fibonacci series : ";
    cin>>num;
    cout<<fab(num); 
return 0;
}