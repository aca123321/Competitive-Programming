#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

main()
{
    lli n,i,arr[3],brr[3],j,mini=INT_MAX,sum=0,temp[3],maxi = 0,count = 0;

    lli week[14];

    cin>>arr[0]>>arr[1]>>arr[2];

    brr[0] = 3;
    brr[1] = 2;
    brr[2] = 2;

    for(i=0;i<3;i++)
    {
        mini = min(mini,arr[i]/brr[i]);
        temp[i] = arr[i];
    }

    week[0] = 0;
    week[1] = 0;
    week[2] = 1;
    week[3] = 2;
    week[4] = 0;
    week[5] = 2;
    week[6] = 1;

    sum += mini*7;

    for(i=0;i<3;i++)
    {
        arr[i] -= brr[i]*mini;
    }

    for(i=7;i<14;i++)
    {
        week[i] = week[i-7];
    }

    for(i=0;i<7;i++)
    {
        count = 0;

        for(j=0;j<3;j++)
        {
            temp[j] = arr[j];
        }

        j = 0;
        while(1)
        {
            if(temp[week[i+j]] > 0)
            {
                temp[week[i+j]]--;
                j++;
                count++;
            }
            else
            {
                break;
            }
        }

        if(count > maxi)
        {
            maxi = count;
        }
    }

    sum += maxi;

    cout<<sum;
}
