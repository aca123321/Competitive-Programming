#include<bits/stdc++.h>
using namespace std;

long long int rad[100000000];
long long int sum[100000000];
#define fr 2.4142135623730950488016887242097

main()
{
    long long int n,a,t,i,max;

    cin>>t;

    rad[0] = 1;
    rad[1] = ceil(fr);
    sum[0] = 1;
    sum[1] = sum[0] + 2*rad[1];
    max = 1;

    while(t--)
    {
        cin>>n;

        if(n <= max)
        {
            a = ceil((sum[n-1])*fr);
            cout<< a%(10000007)<<endl;
        }

        else
        {
            for(i=max+1;i<=n;i++)
            {
                rad[i] = ceil(sum[i-1]*fr);
                sum[i] = sum[i-1] + (2*rad[i]);
            }

            max = n;

            a = ceil((sum[n-1])*fr);

            cout<<(a)%(10000007)<<endl;
        }
    }
}
