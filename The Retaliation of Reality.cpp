#include<bits/stdc++.h>
using namespace std;

#define lli long long int

bool comp(a,b)
{
    if(a[1] >= b[1])
    {
        return true;
    }

    return false;
}


main()
{
    lli t,n,k,i,**arr,difcount,x;

    cin>>t;

    arr = new lli*[100001];

    for(i=0;i<100001;i++)
    {
        arr[i] = new lli[2];
    }

    while(t--)
    {
        cin>>n>>k;

        difcount = 0;
        x = difcount;

        map <lli,lli> m;

        for(i=0;i<n;i++)
        {
            cin>>arr[i][0];

            if(!(m.find(arr[i])))
            {
                m.insert(make_pair(arr[i],1));
                difcount++;
            }

            else
            {
                m[arr[i]]++;
            }
        }

        x = difcount;

        for(i=0;i<n && difcount != 0;i++)
        {

        }


    }
}
