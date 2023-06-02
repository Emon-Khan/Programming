#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main(){
    vector<int>v = {1, 6, 8, 10, 15, 19};
    auto it = lower_bound(v.begin(), v.end(), 9);

    /*if(it == v.end()){
        cout<<"Not Found"<<endl;
    }else{
        cout<<"Found"<<endl;
    }*/
    cout<<distance(v.begin(), it)<<endl;
    //cout<<*it<<endl;

    return 0;
}
