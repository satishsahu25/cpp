#include <iostream>
#include <deque>
using namespace std;

int main()
{

    int arr[10] = {1, 2, 1, 3, 4, 1, 5, 6, 7, 1};
    int cntdist = 0;
    int j;
    for (int i = 0; i < 10; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                break;
            }
        }
        if (i == j)
            {
                cout << arr[i] << endl;

                cntdist++;
            }
    }
     cout << endl<< cntdist;
    return 0;
}