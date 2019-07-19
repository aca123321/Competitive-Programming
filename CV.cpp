#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli i,n,t,count=0;
    string s;
    cin>>t;

    while(t--)
    {
        cin>>n;
        cin>>s;
        count = 0;

        for(i=0;i<n-1;i++)
        {
            if((s[i+1] == 'a' || s[i+1] == 'e' || s[i+1] == 'u' || s[i+1] == 'i' || s[i+1] == 'o') && (s[i] != 'a' || s[i] != 'e' || s[i] != 'u' || s[i] != 'i' || s[i] != 'o') )
            {
                count++;
            }
        }

        cout<<count<<endl;
    }
}
