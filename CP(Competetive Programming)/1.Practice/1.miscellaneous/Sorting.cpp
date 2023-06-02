#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int b[20];
void merge(vector<int> a, int lb, int mid, int ub)
{
    int i, j, k = 0;
    for (i = lb, j = mid + 1; i <= mid && j < ub;)
    {
        if (a[i] <= a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
        }
        k++;
    }
    if (i > mid)
    {
        while (j < ub)
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            b[k] = a[i];
            i++;
            k++;
        }
    }
}
void mergeSort(vector<int> a, int lb, int ub)
{
    int mid = (lb + ub) / 2;
    if (lb < ub)
    {
        mergeSort(a, lb, mid);
        mergeSort(a, mid + 1, ub);
        merge(a, lb, mid, ub);
    }
}
int main()
{
    int n, val, lb, ub, mid;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        a.push_back(val);
    }
    mergeSort(a, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}