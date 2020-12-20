/*
ID: isamudr1
LANG: C++14
PROB: ride
*/
#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");

    lli n,m,i,a,b,c;
    string s,t;

    fin>>s>>t;
    n = s.length();
    m = t.length();

    a = 1;
    for(i=0;i<n;i++)
    {
        a *= ((s[i] - 'A') + 1);
    }
    a = a%47;
    b = 1;
    for(i=0;i<m;i++)
    {
        b *= ((t[i] - 'A') + 1);
    }
    b = b%47;

    if(b == a)
    {
        fout<<"GO\n";
    }
    else
    {
        fout<<"STAY\n";
    }
    return 0;
}
