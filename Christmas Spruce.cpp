#include<bits/stdc++.h>
using namespace std;

main()
{
    int i,n,a,count=0,flag = 0,*par;

    cin>>n;

    int arr[n+1] = {0};
    par = new int[n+1];
    int leaf[n+1] = {0};

    for(i=2;i<=n;i++)
    {
        cin>>a;
        arr[a]++;
        par[i] = a;
    }

    for(i=2;i<=n;i++)
    {
        if(arr[i] == 0)
        {
            leaf[par[i]]++;
        }
    }

    for(i=1;i<=n;i++)
    {
        if(leaf[i] < 3)
        {
            if(arr[i] != 0)
            {
                flag = 1;
                break;
            }
        }
    }

    if(flag == 0)
    {
        cout<<"YES";
    }

    else
    {
        cout<<"NO";
    }
}
