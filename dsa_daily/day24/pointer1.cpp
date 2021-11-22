#include <iostream>
using namespace std;
int main()
{
    int how;
    cout << "Enter the size of array : ";
    cin >> how;
    int *p = (int *)malloc(how * sizeof(int));
    cout << "\nAddress of first mem allocation is : " << p;
    cout << "\nEnter the values in the array :\n";
    for (int i = 0; i < how; i++)
    {
        cin >> p[i];
    }

    cout << "Printing values of the array :\n";
    for (int j = 0; j < how; j++)
    {
        cout << p[j] << endl;
    }

    int more;
    cout << "Enter the size of array : ";
    cin >> more;
     int *q = (int *)malloc(more * sizeof(int));
    cout << "\nAddress of first mem allocation is : " << q;
    cout << "\nPrinting values of the second array :\n";

    // copying the values
    for (int c = 0 ;c<how;c++){
    q[c]=p[c];
    }

    for (int k = 0; k < more; k++)
    {
        cout << q[k] << endl;
    }

free(p);
	p=NULL;
    return 0;
}
