#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli t,n,k,*arr,val,max,min,i,start,j,end,max_length;

    cin>>t;

    while(t--)
    {
        max_length = 0;
        cin>>n>>k;
        arr = new lli[n];
        val = INT_MAX;
        max = INT_MIN;
        min = INT_MAX;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];

            if(arr[i]>max)
            {
                max = arr[i];
            }

            if(arr[i]<min)
            {
                min = arr[i];
            }

            if(arr[i] > k)
            {
                if(arr[i]<val)
                {
                    val = arr[i];
                }
            }
        }

        if(max <= k)
        {
            cout<<"0\n";
            continue;
        }

        if(min > k)
        {
            max_length = 1;
        }

        i=0;

        while(i<n)
        {
            if(arr[i] <= k)
            {
                start = i;
                j = i;
                while(arr[j]<=val && (j<n))
                {
                    j++;
                }
                end = j - 1;

                if((end - start +1)>max_length)
                {
                    max_length = (end - start +1);
                }

                i = j;
            }

            i++;
        }

        cout<<max_length<<endl;
    }
}
