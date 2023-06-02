#include<iostream>
#include<stdio.h>
#include<string>
#include<iterator>
#include<set>

using namespace std;

int main()
{
    set<string>s;
    set<string>:: iterator it;
    s.insert("Dipta");
    s.insert("Kesric");
    s.insert("asha");

    pair<set<string>::iterator, bool>p;
    p = s.insert("Dipta");

    if(p.second == false)
    {
        cout<<"Can't Insert"<<endl;
    }
    else
    {
        cout<<"Inserted"<<endl;
    }
    return 0;

}
