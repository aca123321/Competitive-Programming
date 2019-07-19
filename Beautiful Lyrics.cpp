#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,j,a,b;

    cin>>n;
    lli vc[n]={0};
    string s[n];
    string v[n];

    for(i=0;i<n;i++)
    {
        cin>>s[i];
        for(j=0;<s[i].length();j++)
        {
            if(s[i][j] == 'a' || s[i][j] == 'e' || s[i][j] == 'i' || s[i][j] == 'o' || s[i][j] == 'u')
            {
                v[i] += s[i][j];
                vc[i]++;
            }
        }
    }



}
