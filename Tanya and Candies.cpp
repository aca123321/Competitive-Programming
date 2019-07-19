#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,i,*arr,even=0,odd=0,a,b,c,d,count = 0,flag[10002]={0};

    cin>>n;
    arr = new lli[n];
    lli sume[n] = {0};
    lli sumo[n] = {0};

    cin>>arr[0];
    cin>>arr[1];
    sume[0]=arr[0];
    sumo[0]=0;
    sume[1]=arr[0];
    sumo[1]=arr[1];

    for(i=2;i<n;i++)
    {
        cin>>arr[i];
        flag[arr[i]]++;
        if(i%2 == 0)
        {
            sume[i] += sume[i-1] + arr[i];
            sumo[i] = sumo[i-1];
        }
        else
        {
            sumo[i] += sumo[i-1] + arr[i];
            sume[i] = sume[i-1];
        }
    }

    count = 0;

    for(i=0;i<n;i++)
    {
        if(i != 0)
        {
            a = sume[i-1];
            b = sumo[i-1];
        }

        else
        {
            a = 0;
            b = 0;
        }

        c = sume[n-1] - sume[i];
        d = sumo[n-1] - sumo[i];
        lli diff = abs((a+d)-(b+c));

        if(diff == 0)
        {
            count++;
        }
    }

    cout<<count;
}
