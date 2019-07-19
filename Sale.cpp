#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,m,*arr,i,c=0;

    cin>>n>>m;
    arr = new int[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    for(i=0;i<m;i++)
    {
        if(arr[i]<0)
        {
            c += -1*(arr[i]);
        }

        else
        {
            break;
        }
    }

    cout<<c;
}
