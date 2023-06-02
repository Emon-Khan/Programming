#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

int main(){
    vector <int> v = {1, 6, 8, 10, 15, 19};
    auto it = upper_bound(v.begin(), v.end(), 15);

    /*if(it == v.end()){
        cout<<"Not Found"<<endl;
    }else{
        cout<<"Found"<<endl;
    }*/

    cout<<((it == v.end()) ? "Not Found" : to_string(*it)) << endl;

    return 0;
}
