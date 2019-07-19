#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,i,t,k;
    cin>>t;
    string s,ans;

    for(k=0;k<t;k++)
    {
        cin>>n;
        cin>>s;
        ans = "";

        for(i=0;i<s.length();i++)
        {
            if(s[i] == 'E')
            {
                ans += 'S';
            }
            else
            {
                ans += 'E';
            }
        }

        cout<<"Case #"<<k+1<<": "<<ans;
        if(k != (t-1))
        {
            cout<<endl;
        }

    }
}
