#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,i,a,b,c,d,m,sum=0,diff=0;

    cin>>n>>m;
    lli arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }

    if(sum<m)
    {
        cout<<-1;
        return 0;
    }

    diff = sum-m;

    sort(arr,arr+n,greater<int>());

    cout<<"sum is "<<sum;

    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    i=0;
    b=0;
    d=0;
    c=0;

    while(i<n)
    {
        d++;
        a = 0;
        while((a+b)<=diff)
        {
            if(a<arr[i])
            {
                c+=arr[i]-a;
                b+=a;
                if(c>=m)
                {
                    cout<<d;
                    return 0;
                }
                a++;
                i++;
            }

            else
            {
                break;
            }
        }
    }
/*
    while(i<n)
    {
        d++;
        a = 0;
        while(a<arr[i] && (a+b)<=diff )
        {
            c+=arr[i]-a;
            if(c>=m)
            {
                cout<<c<<" "<<d;
                return 0;
            }
            b+=a;
            a++;
            i++;
        }
    }
*/
}
