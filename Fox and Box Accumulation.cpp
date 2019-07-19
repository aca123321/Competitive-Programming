#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,i,count=0;
    cin>>n;
    lli arr[n],pile=0,ps;
    lli brr[n]={0};

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    while(count != n)
    {
        i = 0;
        ps=0;
        pile++;

        while(i<n)
        {
            if(arr[i] >= ps && brr[i] == 0)
            {
                brr[i] = 1;
                ps++;
                count++;
            }
            i++;
        }
    }

    cout<<pile;
}
