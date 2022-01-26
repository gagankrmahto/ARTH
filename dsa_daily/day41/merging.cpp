#include<iostream>
using namespace std ;
void my_merge(int b1[], int b2[], int len_b1, int len_b2){
int ram = 0;
int rahul = 0;
int vimal = 0;
int len_b3 = len_b1+len_b2;
int b3[len_b3];
while (ram < len_b1 && rahul < len_b2){
  if (b1[ram] < b2[rahul])
  {
      b3[vimal] = b1[ram];
      vimal++;
      ram++;
  }
  else {
      b3[vimal] = b2[rahul];
      vimal++;
      rahul++;
  }
    
while (rahul < len_b2)
{
    b3[vimal] = b2[rahul];
    vimal++;
    rahul++;
}
while (ram < len_b1)
{
    b3[vimal] = b1[ram];
    vimal++;
    ram++;
}

}

for (int tr_vimal=0;tr_vimal<len_b3;tr_vimal++ )
{
cout<<b3[tr_vimal]<<endl;

}
}

int main(){
    int b1[] = {2,5,6,7,10,11};
    int len_b1 = sizeof(b1)/sizeof(b1[0]);
    int b2[] = {3,8,9};
    int len_b2 = sizeof(b2) / sizeof(b2[0]);
    my_merge(b1,b2,len_b1,len_b2);
    return 0;
}