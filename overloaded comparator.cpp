#include<bits/stdc++.h>
using namespace std;

#define pb push_back

bool compare(int a, int b)
{
    return (a == b);
}

bool compare(string a, string b)
{
    int n = a.length();
    if(n != b.length())
    {
        return false;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i] != b[i])
        {
            return false;
        }
    }
    return true;
}

bool compare(vector<int> a, vector<int> b)
{
    int n = a.size();
    int m = b.size();

    if(n != m)
    {
        return false;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i] != b[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> a,b;
    a.pb(1);
    a.pb(2);
    a.pb(3);

    b.pb(1);
    b.pb(1);
    b.pb(3);

    if(compare(a,b))
    {
        cout<<"asd";
    }
}

