#include <iostream>
using namespace ::std;
int main()
{

    int a[] = {45, 23, 99, 67, 12, 34, 88, 76, 51, 10,112};

    int largestele = a[0];

    for (int i = 0; i < (sizeof(a) / sizeof(a[0])) ; i++)
    {
        if (a[i] > largestele)
        {
            largestele = a[i];
        }
    }

    cout << largestele << endl;
    return 0;
}