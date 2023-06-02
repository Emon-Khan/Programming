#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main()
{
    unordered_map<string, int> ourmap;
    pair<string, int> p("abc", 1);
    ourmap.insert(p);
    ourmap["def"] = 5;
    cout << ourmap["abc"] << endl;
    cout << ourmap["def"] << endl;
    cout << ourmap.at("def") << endl;
    if (ourmap.count("ghi"))
    {
        cout << ourmap["ghi"] << endl;
    }
    cout << ourmap.size() << endl;
    ourmap.erase("def");
    cout<<ourmap.size()<<endl;
    return 0;
}