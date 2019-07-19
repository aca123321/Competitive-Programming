#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,i,k,j,flag[5005]={0},a,b,diff=0,count=0,*arr;

    cin>>n>>k;

    lli ar[n];
    vector <lli> v[k];
    vector <lli> :: iterator it;
    arr = new lli[n];


    for(i=0;i<n;i++)
    {
        cin>>arr[i];

        if(flag[arr[i]] == 0)
        {
            diff++;
            flag[arr[i]] = 1;
        }
    }

    if(diff*k < n || k>n)
    {
        cout<<"NO";
    }

    else
    {
        cout<<"YES\n";

        for(i=0;i<n;i++)
        {
            j = 0;

            while(1)
            {
                it = find(v[j].begin(),v[j].end(),arr[i]);

                if(it != v[j].end())
                {
                    j++;
                }

                else
                {
                    break;
                }
            }

            v[j].push_back(arr[i]);

            ar[i] = j+1;
        }

        diff = 0;

        lli flagg[k+1] = {0};

        for(i=0;i<n;i++)
        {
            if(flagg[ar[i]] == 0)
            {
                diff++;
            }

            flagg[ar[i]]++;
        }

        lli x=0;

        if(diff < k)
        {
            for(i=0;i<n;i++)
            {
                if(flagg[ar[i]] >= 2 && x < (k-diff) )
                {
                    ar[i] = k-x;
                    x++;
                    flag[ar[i]]--;
                }

                if(x == (k-diff))
                {
                    break;
                }
            }
        }

        for(i=0;i<n;i++)
        {
            cout<<ar[i]<<" ";
        }
    }
}
