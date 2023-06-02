#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    string S;
    while(N--)
    {
        cin>>S;
        int n=0;
        int count1=0, count2=0, count3=0, count4=0, count5=0, count6=0;
        for(int i=0; i<S.size(); i++)
        {
            if(S[i]=='M')
            {
                count1++;
            }
            else if(S[i]=='A')
            {
                count2++;
            }
            else if(S[i]=='R')
            {
                count3++;
            }
            else if(S[i]=='G')
            {
                count4++;
            }
            else if(S[i]=='I')
            {
                count5++;
            }
            else if(S[i]=='T')
            {
                count6++;
            }
        }
        /*if(count1/1<=count2/3 && count2/3<=count3/2 && count3/2<=count4/1 && count4/1<=count5/1 && count5/1<=count6/1)
        {
            cout<<count1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }*/
        //do
        //{
            count1=count1/1;
            count2=count2/3;
            count3=count3/2;
            count4=count4/1;
            count5=count5/1;
            count6=count6/1;
            /*if(count1>=0 && count2>=0 && count3>=0 && count4>=0 && count5>=0 && count6>=0)
            {
                n++;
            }
        }
        while(count1>0 && count2>0 && count3>0 && count4>0 && count5>0 && count6>0);
        /*{
            n++;
        }
        cout<<n<<endl;*/
        cout<<min(count6,min(count5,min(count4,min(count3,min(count1,count2)))))<<endl;
        //cout<<count1<<" "<<count2<<" "<<count3<<" "<<count4<<" "<<count5<<" "<<count6<<endl;
    }
    return 0;
}
