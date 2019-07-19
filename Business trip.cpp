#include<bits/stdc++.h>
using namespace std;

main()
{
    int k,arr[12],sum=0,i,c=0,flag = 0;

    cin>>k;

    for(i=0;i<12;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+12,greater<int>());

    for(i=0;i<12;i++)
    {
        if(sum>=k)
        {
            cout<<c;
            flag++;
            break;
        }

        else
        {
            sum = sum + arr[i];
            c++;
        }
    }

    if(sum>=k && flag == 0)
    {
        cout<<c;
        flag++;
    }

    if(flag == 0)
    {
        cout<<-1;
    }
}
