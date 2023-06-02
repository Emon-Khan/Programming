#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
/***
**     Author: Rois Uddin Khan Emon
**     Bangladesh University of Business and Technology
**     Dept. of CSE.
       Source-
***/

#include <stdio.h>
#include <iostream>
#include <sstream>
#include <string.h>
#include <string>
#include <cwctype>
#include <math.h>
#include <vector>
#include <iterator>
#include <map>
#include <set>
#include <stack>
#include <algorithm>

#define pb pushback
#define Sqr(n) (n * n)
#define Sort(v) sort(v.begin(), v.end())
#define Mxe(v) *max_element(v.begin(), v.end())
#define Mne(v) *min_element(v.begin(), v.end())
#define Fin freopen("input.txt", "r", stdin)
#define Fout freopen("output.txt", "w", stdout)

using namespace std;

typedef long long ll;
typedef long long int lli;
typedef unsigned long long ull;
const double PI = acos(-1.0);
const lli maxn = 1e5 + 7;

template <typename T>
T Abs(T a)
{
    if (a < 0)
        return -a;
    else
        return a;
}
template <typename T>
T BigMod(T b, T p, T m)
{
    if (p == 0)
        return 1;
    if (p % 2 == 0)
    {
        T s = BigMod(b, p / 2, m);
        return ((s % m) * (s % m)) % m;
    }
    return ((b % m) * (BigMod(b, p - 1, m) % m)) % m;
}
template <typename T>
T Pow(T B, T P)
{
    if (P == 0)
        return 1;
    if (P & 1)
        return B * Pow(B, P - 1);
    else
        return Sqr(Pow(B, P / 2));
}
template <typename T>
T gcd(T a, T b)
{
    if (a < 0)
        return gcd(-a, b);
    if (b < 0)
        return gcd(a, -b);
    return (b == 0) ? a : gcd(b, a % b);
}
template <typename T>
T lcm(T a, T b)
{
    if (a < 0)
        return lcm(-a, b);
    if (b < 0)
        return lcm(a, -b);
    return a * (b / gcd(a, b));
}

char uplowch(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        ch += 32;
    return ch;
}
char lowupch(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        ch -= 32;
    return ch;
}
string intostr(int x)
{
    stringstream ss;
    ss << x;
    string str = ss.str();
    return str;
}

#define MOD 1000000007
#define MAX -1000000007
#define MIN 1000000007
#define size 5
int A[size];
int front = -1;
int rear = -1;
bool isEmpty()
{
    if (front == -1 && rear == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isFull()
{
    int i = (rear + 1) % size;
    if (i == front)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void EnQueue(int x)
{
    int i = rear;
    if (isEmpty())
    {
        front = rear = 0;
        A[rear] = x;
    }
    else if (isFull())
    {
        cout << "Queue is Full" << endl;
    }
    else
    {
        rear = (i + 1) % size;
        A[rear] = x;
    }
    // if(front == rear && front!=0 && rear!=0)

    //cout << "rear " << rear << endl;
    
}
void DeQueue()
{
    int i = front;
    if (isEmpty())
    {
        cout << "Queue is empty";
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (i + 1) % size;
    }
}
void showFront()
{
    if (isEmpty())
    {
        cout << "Queue is empty";
    }
    else
    {
        cout << "Front element is: " << A[front];
    }
}
void displayQueue()
{
    if (isEmpty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        if (rear < front)
        {
            for (int i = front; i <= size + rear; i++)
            {
                cout << A[i % size] << " ";
            }
        }
        else
        {
            for (int i = front; i <= rear; i++)
            {
                cout << A[i] << " ";
            }
        }
    }
    cout << endl;
}
int main()
{
    EnQueue(5);
    EnQueue(1);
    EnQueue(15);
    EnQueue(6);
    EnQueue(9);
    DeQueue();
    EnQueue(8);
    EnQueue(51);
    EnQueue(11);
    EnQueue(151);
    EnQueue(61);
    EnQueue(91);
    DeQueue();
    EnQueue(81);
    displayQueue();
    showFront();
    return 0;
}