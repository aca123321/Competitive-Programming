#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,i,j=0,*arr,*dis,num=0,x,count=0;

    cin>>n;

    arr = new int[n];
    dis = new int[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=1;i<(n-1);i++)
    {
        if(arr[i-1] == 1 && arr[i+1] == 1 && arr[i] == 0)
        {
            dis[j] = i;
            j++;
            num++;
        }
    }

    count = 0;
    i = 0;

    while(i<num)
    {
        x=0;
        j = i;

        while(dis[j+1] == (dis[j] + 2) && (j < num-1))
        {
            x++;
            j++;
        }

        i = j + 1;

        if(x != 0)
        {
            count += x;
        }

        else
        {
            count++;
        }
    }

    cout<<count;
}
