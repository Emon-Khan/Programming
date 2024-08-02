// https://www.geeksforgeeks.org/find-initial-integral-solution-of-linear-diophantine-equation-if-finite-solution-exists/
#include <bits/stdc++.h>
using namespace std;
int gcd_extend(int a, int b, int &x, int &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    else
    {
        int g = gcd_extend(b, a % b, x, y);
        int x1 = x, y1 = y;
        x = y1;
        y = x1 - (a / b) * y1;
        return g;
    }
}
void print_solution(int a, int b, int c)
{
    int x, y;
    if (a == 0 && b == 0)
    {
        if (c == 0)
        {
            cout << "Infinite Solution Exists" << endl;
        }
        else
        {
            cout << "No Solution Exists" << endl;
        }
    }
    int gcd = gcd_extend(a, b, x, y);
    if (c % gcd != 0)
    {
        cout << "No Soluton Exists" << endl;
    }
    else
    {
        cout << "x " << x * (c / gcd) << endl;
        cout << "y " << y * (c / gcd) << endl;
    }
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    print_solution(a, b, c);
    return 0;
}