#include<bits/stdc++.h>
using namespace std;

#define lli long long int

lli c2(lli x)
{
    return (((x)*(x+1))/2);
}

main()
{
    lli t,k,i;
    cin>>t;
    lli ans[t];

    for(k=0;k<t;k++)
    {
        lli n,a,sum,count;
        char x;
        string s;
        cin>>n;
        cin>>s;
        cin>>x;
        count = 0;
        sum = 0;
        a = c2(n);

        for(i=0;i<n;i++)
        {
            if(s[i] != x)
            {
                count++;
            }
            else
            {
                sum += c2(count);
                count = 0;
            }
        }

        ans[k] = a - sum;
    }

    for(i=0;i<t;i++)
    {
        cout<<ans[i];
        if(i != (t-1))
        {
            cout<<endl;
        }
    }
}
