#include<iostream>
using namespace std;

main()
{
    long long int n,t,r,i,k,*arr,*ansx,*ansyz,count;

    cin>>t;

    ansx = new long long int[t];
    ansyz = new long long int[t];

    for(k=0;k<t;k++)
    {
        cin>>n>>r;

        arr = new long long int[n];

        count = 0;

        ansx[k] = n;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];

            if(arr[i] <= r)
            {
                count++;
            }
        }

        ansyz[k] = count;
    }

    for(i=0;i<t;i++)
    {
        cout<<ansx[i]<<" "<<ansyz[i]<<" "<<ansyz[i]<<endl;
    }
}
