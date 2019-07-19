#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back

main()
{
    lli n,i,ne=0,no=0,sum=0;
    cin>>n;
    lli arr[n];
    vector<lli> ve,vo;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];

        if(arr[i]%2 == 0)
        {
            ve.pb(arr[i]);
            ne++;
        }

        else
        {
            vo.pb(arr[i]);
            no++;
        }
    }

    sort(ve.begin(),ve.end(),greater<int>());
    sort(vo.begin(),vo.end(),greater<int>());

    if(ne>no)
    {
        for(i=no+1;i<ne;i++)
        {
            sum += ve[i];
        }

        cout<<sum;
    }

    else if(ne == no)
    {
        cout<<0;
    }

    else
    {
        for(i=ne+1;i<no;i++)
        {
            sum += vo[i];
        }

        cout<<sum;
    }
}
