#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli t,n,m,k,i,j,l,wt,*arr,min,ind;

    cin>>t;

    while(t--)
    {
        cin>>n>>m>>k>>l;

        arr = new lli[n];
        wt = m*l;
        min = wt;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        sort(arr,arr+n);

        i = 1;
        j = 0;

        while(i<=k)
        {
            wt--;

            if(wt < min)
            {
                min = wt;
                ind = i;
            }

            if((arr[j] == i) && (j<n))
            {
                wt += l;
                j++;
            }

            i++;
        }

        if(min<(-l))
        {
            min = -l;
        }

        cout<<min+l<<endl;
    }
}
