#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli i,n,count=0,a=0,low=0;
    string s;

    cin>>n;
    cin>>s;

    for(i=0;i<n;i++)
    {
        if(s[i] == '+')
        {
            count++;
        }
        else
        {
            count--;
            low = min(low,count);
        }
    }

    a = count-low;

    if(a<=0)
    {
        cout<<0;
    }
    else
    {
        cout<<a;
    }
}
