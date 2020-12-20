#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,t,a,b,c,j,k,x,y;

    cin>>t;
    lli arr[201];

    while(t--)
    {
        cin>>n;
        a = 0;
        b = 0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(n <= 2)
        {
            cout<<"YES\n";
            continue;
        }

        if(arr[1] == arr[0]+1)
        {
            for(i=1;i<(n-arr[0]+1);i++)
            {
                if(arr[i] != arr[i-1] + 1)
                {
                    a = 1;
                    break;
                }
            }
            j = 1;
            for(i=(n-arr[0]+1);i<n;i++)
            {
                if(arr[i] != j)
                {
                    a = 1;
                    break;
                }
                j++;
            }
        }
        else if(arr[1] == arr[0]-1)
        {
            for(i=1;i<arr[0];i++)
            {
                if(arr[i] != arr[i-1]-1)
                {
                    a = 1;
                    break;
                }
            }
            j=n;
            for(i=arr[0];i<n;i++)
            {
                if(arr[i] != j)
                {
                    a = 1;
                    break;
                }
                j--;
            }
        }
        else
        {
            if(arr[1] > arr[0])
            {
                j = n-1;
                for(i=2;i<n;i++)
                {
                    if(arr[i] != j)
                    {
                        a = 1;
                        break;
                    }
                    j--;
                }
            }
            else if(arr[1] < arr[0])
            {
                j = 2;
                for(i=2;i<n;i++)
                {
                    if(arr[i] != j)
                    {
                        a = 1;
                        break;
                    }
                    j++;
                }
            }if(arr[1] > arr[0])
            {
                j = n-1;
                for(i=2;i<n;i++)
                {
                    if(arr[i] != j)
                    {
                        a = 1;
                        break;
                    }
                    j--;
                }
            }
        }

        if(a == 0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }

}
