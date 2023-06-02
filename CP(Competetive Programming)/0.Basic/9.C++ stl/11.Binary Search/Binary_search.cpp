#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main()
{
    vector<int>v = {1, 3, 5, 7, 9};
    bool ans = binary_search(v.begin(), v.end(), 9);

    if(ans)
    {
        cout<<"Found"<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }
    return 0;

}
