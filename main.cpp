// array and linked list priparation

#include <iostream>
using namespace ::std;
int main()
{

    // declaration of array
    // initialization of the array
    int a[] = {1, 2, 3, 4, 5};
    // accessing and prinnting element from the array

    for (int i = 0; i < (sizeof(a) / sizeof(a[0])) - 1; i++)
    {

        cout << a[i] << endl;
    }

    return 0;
}