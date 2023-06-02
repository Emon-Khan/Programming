// CPP program to implement log() function
#include <bits/stdc++.h>
using namespace std;

// function to evaluate natural logarithm base-e
/*double valueE(double d)
{
    return log(d);
}

// function to evaluate logarithm base-10
double value10(double d)
{
    return log10(d);
}*/
double main_function(int x){
    return sin(x)+5*log10(x);
}
// driver program to test the above function
int main()
{
    int x;
    for(int i = 1; i<=1; i++){
        cin>>x;
        cout<<main_function(x)<<endl;
    }
    //double d = 10;
    /*cout << "The logarithm value(base-e) of " << d
         << " is " << valueE(d) << endl;
    cout << "The logarithm value(base-10) of " << d
         << " is " << value10(d) << endl;*/

    return 0;
}
