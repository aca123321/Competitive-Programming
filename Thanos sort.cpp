#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,i,j;
    double d;
    cin>>n;
    lli arr[n];
    lli count[n]={0},save[n]={0};

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        count[i] = 1;
    }

    for(i=0;i<n;i++)
    {
        for(j=i;j<(n-1);j++)
        {
            if(arr[j+1] >= arr[j])
            {
                count[i]++;
            }
            else
            {
                break;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        d = (log(count[i])/log(2));
        save[i] = floor(d);
    }




}
