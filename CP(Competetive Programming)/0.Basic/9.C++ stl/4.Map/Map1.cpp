#include<iostream>
#include<stdio.h>
#include<map>
#include<string>
#include<algorithm>
#include<iterator>
using namespace std;

int main(){
    map <string, int>m;
    map<string, int>::iterator it;

    m["arnob"] = 43;
    m["dipto"] = 49;
    m.insert(make_pair("nabil", 53));
    for(it = m.begin(); it != m.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;

}
