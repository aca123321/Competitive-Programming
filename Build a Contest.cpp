#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,i,m,*arr,flag[100002]={0},count=0;

    cin>>n>>m;

    lli set[100002]={0};

    arr = new lli[m];

    for(i=0;i<m;i++)
    {
        cin>>arr[i];

        flag[arr[i]]++;

        set[flag[arr[i]]]++;

        if(set[flag[arr[i]]] == n)
        {
            cout<<1;
        }

        else
        {
            cout<<0;
        }
    }
}
