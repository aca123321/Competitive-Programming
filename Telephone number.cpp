#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli i,n,t,flag,ind;
    cin>>t;
    string s;

    while(t--)
    {
        cin>>n;
        cin>>s;
        flag = 0;
        ind = INT_MAX;

        for(i=0;i<n;i++)
        {
            if(s[i] == '8')
            {
                if(n-i >= 11)
                {
                    flag = 1;
                    break;
                }
            }
        }

        if(flag == 1)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }



}
