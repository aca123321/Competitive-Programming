#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli i,j,k,n,q,a,len[3]={0};
    lli num[4] = {0};
    char op,ch;
    cin>>n>>q;
    string s,t;
    lli arr[n];
    vector<char> v[3];
    num[3] = INT_MAX;
    cin>>s;

    for(i=0;i<n;i++)
    {
        arr[i] = 3;
    }

    while(q--)
    {
        t = ""

        cin>>op;
        if(op == '+')
        {
            cin>>a;
            a--;
            len[a]++;
            cin>>ch;
            if(v[a].size() < len[a])
            {
                v[a].pb(ch);
            }
            else
            {
                v[a][len[a]-1] = ch;
            }

            for(i=0;i<len[a];i++)
            {
                t += v[a][i];
            }

            for(i=0;i<n-len[a];i++)
            {

            }
        }
        else
        {
            cin>>a;
            a--;
            v[a][len[a]-1] = '#';
            len[a]--;
        }
    }

}
