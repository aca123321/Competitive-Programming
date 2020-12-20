#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

string s[100001];
lli arr[100001];

main()
{
    lli n,i,a,t,b,c,j,k;

    cin>>t;

    while(t--)
    {
        cin>>n;

        for(i=0;i<n;i++)
        {
            cin>>s[i];
        }

        for(i=0;i<n;i++)
        {
            arr[i] = 0;
            for(j=9;j>=0;j--)
            {
                if(s[i][j] == '1')
                {
                    arr[i] += round(pow(2,9-j));
                }
            }
        }

        a = arr[0];

        for(i=1;i<n;i++)
        {
            a ^= arr[i];
        }
        //cout<<"#"<<a<<endl;
        b = 0;
        for(i=0;i<10;i++)
        {
            c = a&1;
            if(c == 1)
            {
                b++;
            }
            a = a>>1;
        }
        cout<<b<<endl;
    }
}
