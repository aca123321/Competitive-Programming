#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli t,n,i,*arr,flag,k;

    cin>>t;

    while(t--)
    {
        cin>>n;
        arr = new lli[n];
        flag = 0;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        if(arr[0] != 1)
        {
            if(arr[0] != -1)
            {
                cout<<"impossible\n";
                flag++;
            }
        }

        if(flag == 0)
        {

        }



    }
}
