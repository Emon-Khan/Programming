#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> removeDuplicates(int *a, int size)
{
    vector<int> output;
    unordered_map<int, bool> seen;
    for (int i = 0; i < size; i++)
    {
        if (seen[a[i]])
        {
            continue;
        }
        seen[a[i]] = true;
        output.push_back(a[i]);
    }
    return output;
}
int main()
{
    int ar[] = {1, 5, 8, 9, 7, 6, 5, 4, 7};
    int size = sizeof(ar) / sizeof(ar[0]);
    vector<int> output = removeDuplicates(ar, size);
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << endl;
    }
    return 0;
}