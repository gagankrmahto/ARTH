#include <iostream>
using namespace std;

int natural(int n ){

    if (n==0){
        return 0;
    }
    else{
        return natural(n-1) + n;
    }
}

int main(){
    cout<<natural(3);
}