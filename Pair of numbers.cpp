#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,x,*arr,l=0,i,r;

    cin>>n;
    r = n-1;
    arr = new int[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cin>>x;

    while(arr[l]+arr[r] != x)
    {
        if(arr[l]+arr[r] < x)
        {
            l++;
        }

        else if(arr[l]+arr[r] > x)
        {
            r--;
        }

        if(l>=r)
        {
            cout<<"NO";
            break;
        }
    }

    if((arr[l]+arr[r] == x) && (l < r))
    {
        cout<<"YES";
    }
}
