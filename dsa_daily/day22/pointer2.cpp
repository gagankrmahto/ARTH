#include<iostream>
using namespace std;
int main(){

	int i,j;
	int *x,*y;
	
	x=&i;
	y=&j;
	i=3;
j=4;	
	cout<<i<<endl;
	cout<<j<<endl;
	cout<<x<<endl;
	cout<<y<<endl;
	cout<<&i<<endl;

	cout<<&j<<endl;

	cout<<*x<<endl;
	cout<<*y<<endl;
	*y=*x;
	cout<<*x<<endl;
	cout<<*y<<endl;
	cout<<x<<endl;
	cout<<y<<endl;

	cout<<i<<endl;
	cout<<j<<endl;


}
