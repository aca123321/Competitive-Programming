#include<bits/stdc++.h>

using namespace std;

main()
{
    int t,n,k,i;

    cin>>t;

    while(t--)
    {
        cin>>n>>k;

        for(i=0;i<n;i++)
        {
            cout<<char(97+(i%k));
        }

        cout<<endl;
    }
}
