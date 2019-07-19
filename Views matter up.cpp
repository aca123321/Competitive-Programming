#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,m,*arr,i,count = 0,ncovered = 0, hcovered = 0,right = INT_MIN,sum=0;

    cin>>n>>m;

    arr = new lli[n+2];

    arr[0] = 0;

    for(i=1;i<n+1;i++)
    {
        cin>>arr[i];

        if(arr[i] > right)
        {
            right = arr[i];
        }

        sum += arr[i];
    }

    sort(arr, arr+(n+1));

    arr[n+1] = 0;

    while(1)
    {
        if(arr[ncovered+1] > hcovered)
        {
            ncovered++;
            hcovered++;

            if(ncovered >= n && hcovered >= right)
            {
                break;
            }
        }

        else if(arr[ncovered] > hcovered)
        {
            hcovered ++;

            if(ncovered >= n && hcovered >= right)
            {
                break;
            }
        }

        else
        {
            ncovered++;
            count++;

            if( ncovered >= n && hcovered >= right)
            {
                break;
            }
        }
    }

    cout<<sum - (right + count);
}


