#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,m,*brr,i,j=0,mini=0,maxi=INT_MIN,a,b,c=0,rem,ma=0;
    int arr[1005]={0};

    cin>>n>>m;
    a = n;

    brr = new int[m];

    for(i=0;i<m;i++)
    {
        cin>>brr[i];
        arr[brr[i]]++;
        maxi = max(maxi, brr[i]);
    }

    for(i=1;i<=maxi;i++)
    {
        if(a<=(i*arr[i]))
        {
            b = a/i;
            rem = a%i;

            a = 0;
            mini += (((i)*(i+1))/2)*b;
            mini += (((i)*(i+1))/2)-(((i-rem)*(i+1-rem))/2);

            break;
        }

        else
        {
            a -= i*arr[i];
            mini += (((i)*(i+1))/2)*arr[i];
        }
    }

    a = n;

    for(i=maxi;i>=1;i--)
    {
        if(a<=arr[i])
        {
            ma += a*(i);
            arr[i-1] += arr[i];
            a = 0;
            break;
        }
        else
        {
            ma += arr[i]*i;
            arr[i-1] += arr[i];
            a -= arr[i];
        }
    }

    cout<<ma<<" "<<mini;
}
