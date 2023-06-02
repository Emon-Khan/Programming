#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int>mymap;
    map<string, int>::iterator it;
    int m, n, value;
    string s;
    string sentence;
    cin>>m>>n;
    while(m--)
    {
        cin>>s>>value;
        mymap.insert(pair<string, int>(s, value));
    }
    getchar();
    while(n--)
    {
        while(getline(cin, sentence))
        {
            int Size = sentence.size();
            if(sentence.size()==1 && sentence==".")
            {
                break;
            }
            //cout<<sentence.size()<<endl;
            //cout<<sentence<<endl;
            for(int i=0; i<Size; i++)
            {
                int wcount = 0;
                while(sentence[i]!=' ')
                {
                    while(sentence[i+wcount]!=' ' && (i+wcount)<Size)
                    {
                        wcount++;
                    }
                    cout<<wcount<<endl;
                    i+=wcount;
                    break;
                }
            }
        }
    }

    /*for(it=mymap.begin(); it!=mymap.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }*/
    return 0;
}

