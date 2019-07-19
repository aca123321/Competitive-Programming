#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back

main()
{
    lli n,j,i,t,k,l,a,b,p,temp;
    lli arr[100],brr[100],sieve[10002]={0},code[26],m[26][26],ans[101];
    cin>>t;
    vector<lli> v;
    string s;
    map<lli, lli> ma;

    for(i=2;i<10002;i++)
    {
        if(sieve[i] == 0)
        {
            v.pb(i);

            for(j=i*i;j<=n;j+=i)
            {
                sieve[j] = 1;
            }
        }
    }

    for(k=0;k<t;k++)
    {
        s = "";

        cin>>n>>l;

        ma.clear();

        for(i=0;i<l;i++)
        {
            cin>>arr[i];
            brr[i] = arr[i];
        }

        sort(brr,brr+l);

        for(i=0;i<v.size();i++)
        {
            if(v[i]*(v[i+1]) == brr[0])
            {
                a = i;
                break;
            }
        }

        for(i=0;i<26;i++)
        {
            code[i] = v[a+i];
            ma[v[a+i]] = i;
        }

        for(i=0;i<26;i++)
        {
            for(j=0;j<26;j++)
            {
                m[i][j] = code[i]*code[j];
            }
        }

        for(i=0;i<26;i++)
        {
            for(j=0;j<26;j++)
            {
                if(m[i][j] == arr[0])
                {
                    a = i;
                    b = j;
                }
            }
        }

        for(i=0;i<26;i++)
        {
            for(j=0;j<26;j++)
            {
                if(m[i][j] == arr[1])
                {
                    if(a == i || a == j)
                    {
                        b = temp;
                        temp = a;
                        a = b;
                    }
                }
            }
        }

        ans[0] = a;
        ans[1] = b;
        for(i=1;i<l;i++)
        {
            ans[i+1] = (arr[i]/ans[i]);
        }
        cout<<"Case #"<<k+1<<": ";
        for(i=0;i<=l;i++)
        {
            cout<<char(int(ma[ans[i]]) + int('A'));
        }
        if(k != (t-1))
        {
            cout<<endl;
        }
    }
}
