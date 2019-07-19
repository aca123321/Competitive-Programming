#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

main()
{
    lli i,n,l,r,flag =0;
    string s;

    cin>>n;
    cin>>s;
    lli arr[n];

    for(i=0;i<n;i++)
    {
        arr[i] = int(s[i]) - int('a');
    }

    for(i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            l = i;
            r = i+1;
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES\n";
        cout<<l<<" "<<r;
/*
        for(i=0;i<n;i++)
        {
            if(i == l-1)
            {
                cout<<s[i+1];
            }
            else if(i == r-1)
            {
                cout<<s[i-1];
            }
            else
            {
                cout<<s[i];
            }
        }
*/
    }
}
