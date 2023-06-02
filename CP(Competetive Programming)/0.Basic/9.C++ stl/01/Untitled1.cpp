#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>vec(5, 2);
    vector<int>::iterator it;
    vec.push_back(37);
    int i;
    for(i=0; i<vec.size(); i++){
        printf("%d\t", vec[i]);
    }
    it=vec.begin();
    printf("\n%d", *it);

    return 0;
}
