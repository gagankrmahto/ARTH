#include <iostream>
using namespace std;
//Tail Recursion
int lw(int i){
	if(i==0){
		return 0;
	}
	lw(i-1);
	cout<<i<<endl;
	return 3;
}

int main(){
int x = 5;
lw(x);

}
