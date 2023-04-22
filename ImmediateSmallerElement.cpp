#include <bits/stdc++.h>
using namespace std;

void immediateSmaller(int *arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            arr[i] = -1;
            break;
        }
        if (arr[i] < arr[i + 1])
        {
            arr[i] = -1;
        }
        else
        {
            arr[i] = arr[i + 1];
        }
    }
}

int main()
{

    return 0;
}