#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,m,a,j,sum = 0,*arr,right = INT_MIN,i,count = 0,ncovered = 0;

    cin>>n>>m;

    arr = new lli[n];
    lli height[m+1] = {0};


    for(i=0;i<n;i++)
    {
        cin>>arr[i];

        sum += arr[i];

        height[arr[i]] = height[arr[i]] + 1;

        if(arr[i] > right)
        {
            right = arr[i];
        }
    }

    lli num[right+1] = {0};

    num[right] = height[right];

    for(i=right-1;i>=1;i--)
    {
        num[i] = num[i+1] + height[i];
    }

    i = right;
    j = 0;

    while(i>=2)
    {
        a = i;

        while(num[a] == num[i] && a >= 2)
        {
            a--;
        }

        if((i-a) >= num[i])
        {
            count += (i-a);
        }

        else
        {
            count += (i-a);
            j += num[i]-1;
        }

        i = a;

    }

    cout<<(sum - count - j - height[1]);

}


/*
    i = right;

    while(i>0)
    {
        if(num[i] >= 2)
        {
            a = i;

            while(num[a] == num[i] && a >= 1)
            {
                a--;
            }

            count += num[i]*(i-a) - (i-a);

            i = a;
        }
    }
*/
