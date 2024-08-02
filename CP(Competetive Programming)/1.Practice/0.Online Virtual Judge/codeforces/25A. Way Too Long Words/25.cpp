/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        int length=s.size();
        if(length>10)
        {
            cout<<s[0]<<length-2<<s[length-1]<<endl;
        }
        else
        {
            cout<<s<<endl;
        }
    }
    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, l, i;
    scanf("%d", &n);
    char c[101][101];
    for(int i=0; i<n; i++)
    {
        scanf("%s", &c[i]);
    }
    for(int i=0; i<n; i++)
    {
        l = strlen(c[i]);
        if(l>10)
        {
            printf("%c%d%c\n", c[i][0], l-2, c[i][l-1]);
        }
        else
        {
            printf("%s\n", c[i]);
        }
    }
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, l, i;
    scanf("%d", &n);
    char c[101];
    for(int i=0; i<n; i++)
    {
        scanf("%s", &c);
        l=strlen(c);
        if(l>10)
        {
            printf("%c%d%c\n", c[0], l-2, c[l-1]);
        }
        else
        {
            printf("%s\n", c);
        }
    }
    return 0;
}
