#include <bits/stdc++.h>
using namespace std;
/*vector<int> calculatedVal(int *a, int size)
{
    unordered_map<int, int> count_val;
    /*for (int i = 0; i < size; i++)
    {
        if (count_val.count(a[i]))
        {
            count_val[a[i]] =
        }
    }
}*/
int main()
{
    int ar[] = {1, 5, 8, 9, 7, 6, 5, 4, 7};
    int size = sizeof(ar) / sizeof(ar[0]);
    unordered_map<int, int> count_val;
    // vector<int> output = calculatedVal(ar, size);

    for (int i = 0; i < size; i++)
    {
        count_val[ar[i]] = count_val.count(count_val[ar[i]]);
    }
    for (int i = 0; i < size; i++)
    {
        cout << count_val[ar[i]] << endl;
    }
}
