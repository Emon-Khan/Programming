/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[101];
    cin>>s;
    int i, l, s1=0, s2=0, s3=0;
    l = strlen(s);
    for(i=0; i<l; i++)
    {
        if(s[i]=='1')
        {
            s1++;
        }
        else if(s[i]=='2')
        {
            s2++;
        }
        else if(s[i]=='3')
        {
            s3++;
        }
    }
    for(i=0; i<s1; i++)
    {
        cout<<'1';
        if(s2==0 && s3==0 && i==s1-1)
        {
            cout<<endl;
        }
        else
        {
            cout<<'+';
        }
    }
    for(int i=0; i<s2; i++)
    {
        cout<<'2';
        if(s3==0 && i==s2-1)
        {
            cout<<endl;
        }
        else
        {
            cout<<'+';
        }
    }
    for(int i=0; i<s3; i++)
    {
        cout<<'3';
        if(i==s3-1)
        {
            cout<<endl;
        }
        else
        {
            cout<<'+';
        }
    }
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[101];
    cin>>s;
    int l = strlen(s);
    int i, a=0, b=0, c=0;
    for(i=0; i<l; i++)
    {
        if(s[i]=='1')
        {
            a++;
        }
        else if(s[i]=='2')
        {
            b++;
        }
        else if(s[i]=='3')
        {
            c++;
        }
    }
    bool first = true;
    for(i=0; i<a; i++)
    {
        if(first==true)
        {
            cout<<"1";
            first=false;
        }
        else
        {
            cout<<"+1";
        }
    }
    for(i=0; i<b; i++)
    {
        if(first==true)
        {
            cout<<"2";
            first=false;
        }
        else
        {
            cout<<"+2";
        }
    }
    for(i=0; i<c; i++)
    {
        if(first==true)
        {
            cout<<"3";
            first=false;
        }
        else
        {
            cout<<"+3";
        }
    }
    cout<<endl;
    return 0;
}
