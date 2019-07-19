#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define sec second
#define pb push_back

main()
{
    lli n,i,a,b,j,ans = 0;

    cin>>n;
    lli brr[n],arr[n]={0};
    map<lli, lli> m,t;
    lli val[6] = {4,8,15,16,23,42};
    vector<lli> v[100003];

    for(i=0;i<n;i++)
    {
        cin>>brr[i];

        if(brr[i]==4) // 4
        {
            v[m[4]].pb(4);
            m[4]++;
            arr[i] = m[4];
        }
        else if(brr[i] == 8) // 8
        {
            if(m[4]>m[8])
            {
                v[m[8]].pb(8);
                m[8]++;
                arr[i] = m[8];
            }
            else
            {
                arr[i] = 0;
            }
        }
        else if(brr[i] == 15) // 15
        {
            if(m[8]>m[15])
            {
                v[m[15]].pb(15);
                m[15]++;
                arr[i] = m[15];
            }
            else
            {
                arr[i] = 0;
            }
        }
        else if(brr[i] == 16) //16
        {
            if(m[15]>m[16])
            {
                v[m[16]].pb(16);
                m[16]++;
                arr[i] = m[16];
            }
            else
            {
                arr[i] = 0;
            }
        }
        else if(brr[i] == 23) //23
        {
            if(m[16]>m[23])
            {
                v[m[23]].pb(23);
                m[23]++;
                arr[i] = m[23];
            }
            else
            {
                arr[i] = 0;
            }
        }
        else if(brr[i] == 42) //42
        {
            if(m[23]>m[42])
            {
                v[m[42]].pb(42);
                m[42]++;
                arr[i] = m[42];
            }
            else
            {
                arr[i] = 0;
            }
        }

    }

    lli mini = INT_MAX;

    if(m[4]<mini)
    {
        mini = m[4];
    }
    if(m[8]<mini)
    {
        mini = m[8];
    }
    if(m[15]<mini)
    {
        mini = m[15];
    }
    if(m[16]<mini)
    {
        mini = m[16];
    }
    if(m[23]<mini)
    {
        mini = m[23];
    }
    if(m[42]<mini)
    {
        mini = m[42];
    }

    cout<<(n-(mini*6));
}
