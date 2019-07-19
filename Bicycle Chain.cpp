#include<bits/stdc++.h>
using namespace std;

main()
{
    int i,n,m,*a,*b,j,c=0,max = INT_MIN;

    cin>>n;
    a = new int[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cin>>m;
    b = new int[m];

    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }

    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            if(b[j]%a[i] == 0)
            {
                if(b[j]/a[i] > max)
                {
                    max = b[j]/a[i];
                    c=1;
                }

                else if(b[j]/a[i] == max)
                {
                    c++;
                }
            }
        }
    }

    cout<<c;
}
