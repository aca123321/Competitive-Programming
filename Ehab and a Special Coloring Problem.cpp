#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

lli s[100002]={0};

main()
{
    lli n,i,a;

    cin>>n;

    lli count = 0;
    for (i=2; i*i<=100001; i++)
    {
        if (s[i] == 0)
        {
            count++;
            s[i] = count;
            for (a=i*i; a<=100001; a += i)
            {
                if(s[a] == 0)
                {
                    s[a] = count;
                }
            }
        }
    }

    for(i=2;i<=n;i++)
    {
        cout<<s[i]<<" ";
    }
}
