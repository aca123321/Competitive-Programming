#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,t,a,b;
    map<string, lli> m;
    string s;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>s;
        if(m[s] == 0)
        {
            cout<<"OK\n";
        }
        else
        {
            cout<<s<<m[s]<<endl;
        }
        m[s]++;
    }

}

