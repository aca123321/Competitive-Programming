#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,a,b,j;
    cin>>n;
    lli arr[n],brr[n];
    vector<pair<lli,lli>> v;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        brr[i] = (arr[i] == 0)?1:(-1);
    }
    lli maxsf=0, maxeh=0,start=-1,end=-1,s=0;
    for(i=0;i<n;i++)
    {
        maxeh += brr[i];
        if(maxeh>maxsf)
        {
            maxsf = maxeh;
            start = s;
            end = i;
        }
        if(maxeh<0)
        {
            maxeh = 0;
            s = i+1;
        }
    }

    a = 0;
    if(maxsf == 0)
    {
        for(i=0;i<n;i++)
        {
            a += arr[i];
        }
        cout<<a-1;
        return 0;
    }

    //cout<<"#"<<start<<" "<<end<<endl;

    for(i=start;i<=end;i++)
    {
        arr[i] = 1-arr[i];
    }
    for(i=0;i<n;i++)
    {
        a += arr[i];
    }
    cout<<a;
}
