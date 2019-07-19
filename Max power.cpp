#include<bits/stdc++.h>
using namespace std;

#define lli int

int main()
{
    lli n,i;

    cin>>n;
    string s;

    cin>>s;

    for(i=0;i<n;i++)
    {
        if(s[n-1-i] == '1')
        {
            cout<<i;
            return 0;
        }
    }
}
