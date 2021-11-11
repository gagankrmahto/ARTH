#include<iostream>
using namespace std ;
int main ()
{
 int how ;
 cout<<"Enter the size of array : ";
 cin>>how;
 int *p = (int * )malloc(how * sizeof(int));
 cout<<"Address of first mem allocation is : "<<p;
cout<<"Enter the values in the array :\n";
for (int i=0;i<how;i++){
    cin>>p[i];
}

for (int j = 0;j<how;j++){
cout<<p[j]<<endl;
}
return 0;
}