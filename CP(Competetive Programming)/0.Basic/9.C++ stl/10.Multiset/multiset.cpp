#include<iostream>
#include<stdio.h>
#include<string>
#include<queue>
#include<map>
using namespace std;
int main(){
    multimap<string, int>m;
    multimap<string, int>::iterator it;
    m.insert(make_pair("dipto", 41));
    m.insert(make_pair("Dipto", 49));
    m.insert(make_pair("dipto", 51));
    m.insert(make_pair("arnob", 15));

    for(it = m.begin(); it != m.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;
}
