#include<iostream>
using namespace std ;
void lwswap(int * i , int * j ){
    int temp = *i ;
    *i = *j ;
    *j = temp ;

}

int main (){
    int x = 5 ;
    int y = 10;
    cout << "I am inside  main function: "<<x <<" " << y<<endl;
    lwswap(&x,&y);
    cout << "I am inside  main  function: "<<x <<" " << y;
}