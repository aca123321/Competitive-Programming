#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

lli arr[1441];

main()
{
    lli n,i,flag,t,a,b,k,c;
    char cur;
    map<char,char> m;
    cin>>t;
    vector<lli> vb,vbn,ve;
    map<lli, char> md;
    string s;

    m['C'] = 'J';
    m['J'] = 'C';

    for(k=1;k<=t;k++)
    {
        cin>>n;
        flag=0;
        vb.clear();
        vbn.clear();
        ve.clear();
        md.clear();

        for(i=0;i<1441;i++)
        {
            arr[i] = 0;
        }

        for(i=0;i<n;i++)
        {
            cin>>a>>b;
            arr[a]++;
            arr[b]--;
            vb.pb(a);
            ve.pb(b);
        }

        for(i=0;i<=1440;i++)
        {
            if(arr[i]>2)
            {
               flag = 1;
               break;
            }
            if(i>0)
            {
                arr[i] += arr[i-1];
            }
            if(arr[i]>2)
            {
               flag = 1;
               break;
            }
        }

        vbn = vb;
        sort(vb.begin(),vb.end());
        if(flag == 0)
        {
            s = "";
            cur = 'C';
            for(i=0;i<n;i++)
            {
                if(arr[vb[i]] == 1)
                {
                   md[vb[i]] = 'C';
                   cur = 'C';
                }
                else
                {
                    md[vb[i]] = m[cur];
                    cur = m[cur];
                }
            }

            for(i=0;i<n;i++)
            {
                s += md[vbn[i]];
            }
        }
        else
        {
            s = "IMPOSSIBLE";
        }

        cout<<"Case #"<<k<<": "<<s<<endl;
    }

}
/*
4
3
360 480
420 540
600 660
3
0 1440
1 3
2 4
5
99 150
1 100
100 301
2 5
150 250
2
0 720
720 1440
*/
