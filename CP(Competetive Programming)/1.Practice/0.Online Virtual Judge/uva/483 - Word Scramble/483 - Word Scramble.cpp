#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while(getline(cin,str))
    {
        int size = str.size();
        for(int i=0; i<size; i++)
        {
            int count = 0;
            if(str[i]!=' ')
            {
                while(str[i+count]!=' ' && i+count<size)
                {
                    count++;
                }
                for(int j=(i+count)-1; i<=j ; j--)
                {
                    cout<<str[j];
                }
                i+=count-1;
            }
            else
            {
                cout<<str[i];
            }
        }
        cout<<endl;
    }
    return 0;
}
