#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string, int>m;
    getchar();
    while(n--)
    {
        string key;
        int value = 0;
        cin>>key>>value;
        m.insert(pair<string, int>(key, value));
        //m[key]=value;

    }
    /*map <string, vector<int>>m;
    map <string, vector<int>>::iterator it;*/
    /*m.insert(make_pair("arnob", "Sadman"));
    m.insert(make_pair("minhaz", "Sakib"));
    m.insert(make_pair("Emon", "Faisal"));
    m.insert(make_pair("Joy", "Mendi"));*/
    /*m["Nabil"].push_back(27);
    m["Emon"].push_back(72);
    m["Tayeb"].push_back(18);
    m["Shafin"].push_back(7);
    m["Shafin"].push_back(19);
    m["Shafin"].push_back(10);*/
    //m["Arnob"] = 20;
    for(auto &el1:m)
    {
        cout<<el1.first<<" "<<el1.second<<endl;
    }
    /*for(auto &el1:m){
        cout<<el1.first<<" ";
        for(auto &el2:el1.second){
            cout<<el2<<endl;
        }
    }*/
    //cout<<endl;
    /*for(it=m.begin();it!=m.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }*/
    /*for(it=m.begin();it!=m.end(); it++)
    {
        cout<<it->first<<" ";
        for(auto &second:it->second){
            cout<<second<<endl;
        }
    }*/

//    Map Find

//       Start

//    for(it = mapp.find(x); it != mapp.end(); ++it)
//    {
//        if(it -> first == x)
//        {
//            cout<<it -> first<<endl;
//            cout<<"found\n";
//            break;
//        }
//    }
//    END

    return 0;
}
