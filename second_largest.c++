#include <iostream>
using namespace ::std;
int main()
{

    int a[] = {45, 23, 99, 67, 12, 34, 88, 76, 51, 10, 112};

    int largestele = a[0];

    for (int i = 0; i < (sizeof(a) / sizeof(a[0])) - 1; i++)
    {
        for (int j = 0; j < (sizeof(a) / sizeof(a[0])) - 1; j++)
        {

            if (a[j] > a[j + 1])
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    cout << "second largest element :"<<a[(sizeof(a) / sizeof(a[0])) - 3] << endl;
    return 0;
}