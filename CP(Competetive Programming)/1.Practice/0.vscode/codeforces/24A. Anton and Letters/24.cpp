/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int count=0;
    int length = s.size();
    for(int i=0; i<length; i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            count++;
            //cout<<i<<"\t"<<count<<endl;
            for(int j=i+1; j<length; j++)
            {
                if(s[j]>=97 && s[j]<=122)
                {
                    if(s[i]==s[j])
                    {
                        //s[j]=j;
                        s[j]=0;
                    }
                }
            }
        }
    }
    cout<<count<<endl;
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<char>s;
    //set<char>::iterator it;
    //pair<set<char>::iterator, bool>p;
    string c;
    getline(cin, c);
    //int length = c.size();
    for(int i=0; c[i]!='\0'; i++)
    {
        if(isalpha(c[i]))
        {
            s.insert(c[i]);
        }
    }
    cout<<s.size()<<endl;
    return 0;
}
