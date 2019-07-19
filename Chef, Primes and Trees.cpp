#include<bits/stdc++.h>
using namespace std;

main()
{
    long long int n,i,j,*sieve,*arr,count=0;

    sieve = new long long int[40100];

    for(i=0;i<40100;i++)
    {
        sieve[i] = 0;
    }

    for(i=2;i<20052;i++)
    {
        if(sieve[i] == 0)
        {
            j = 2*i;

            while(j < 40100)
            {
                sieve[j] = sieve[j] + 1;
                j = j+i;
            }
        }
    }

    cin>>n;

    arr = new long long int[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(sieve[(arr[i]+arr[j])] == 0)
            {
                cout<<i+1<<" "<<j+1<<" "<<endl;
                count++;

                if(count == n-1)
                {
                    break;
                }
            }
        }

        if(count == n-1)
        {
            break;
        }
    }

}
