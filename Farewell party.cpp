#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,*arr,*sim,i,flagz=0,flagnz=0,flagim=0;

    cin>>n;

    arr = new lli[n];
    sim = new lli[n];

    map <lli, lli> m;
    map <lli, lli> no;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];

        if(arr[i] != 0)
        {
            flagnz = 1;
        }

        else
        {
            flagz++;
        }
    }

    if(flagz == 1 && flagnz == 1)
    {
        cout<<"Impossible";
    }

    else if(flagz == n)
    {
        cout<<"Possible\n";

        for(i=0;i<n;i++)
        {
            cout<<"1 ";
        }
    }

    else
    {
        for(i=0;i<n;i++)
        {
            sim[i] = (n - 1 - arr[i]);
        }

        lli j = 1;

        for(i=0;i<n;i++)
        {
            if(no[sim[i]] == 0)
            {
                arr[i] = j;
                m[sim[i]] = j;
                no[sim[i]]++;
                j++;
            }

            else if(no[sim[i]] <= (sim[i] + 1))
            {
                arr[i] = m[sim[i]];
                no[sim[i]]++;
            }

            else
            {
                arr[i] = j;
                m[sim[i]] = j;
                no[sim[i]]=1;
                j++;
            }
        }

        for(i=0;i<n;i++)
        {
            if(arr[i] > n)
            {
                cout<<"Impossible";
                flagim = 1;
                break;
            }
        }

        if(flagim == 0)
        {
            cout<<"Possible\n";

            for(i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
        }
    }


}
