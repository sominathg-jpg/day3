#include <iostream>
using namespace ::std;
int main()
{

    int a[] = {45, 23, 99, 67, 12, 34, 88, 76, 51, 10,0};

    int smallest = a[0];

    for (int i = 0; i < (sizeof(a) / sizeof(a[0])) ; i++)
    {
        if (a[i] < smallest)
        {
            smallest = a[i];
        }
    }

    cout << smallest << endl;
    return 0;
}