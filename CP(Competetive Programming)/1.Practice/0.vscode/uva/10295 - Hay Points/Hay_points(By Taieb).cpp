#include<bits/stdc++.h>
using namespace std;

int main()
{
   string str,enter;

   int t,i = 1;
   cin>>t;
   //getline(cin,enter);//getchar()
   while(t--)
   {
       cout<<"i = "<<i<<endl;
       getline(cin,str);
       cout<<"str = "<<str<<endl;
       i++;
   }
   return 0;
}
