#include<bits/stdc++.h>
using namespace std;

#define lli long long int

lli days(lli y, lli m, lli d,lli n,lli* arr,lli* sum)
{
    lli remy,day=0;

    day += ((y-1)/4)*(sum[n]*4 + 1);
    day +=  ((y-1)%4)*(sum[n]);

    day += sum[m-1];
    day += d;

    return day;
}

main()
{
    lli t,n,i,*arr,by,bm,bd,cy,cm,cd,*sum,y,m,d;

    cin>>t;

    arr = new lli[10001];
    sum = new lli[10001];

    sum[0] = 0;

    while(t--)
    {
        cin>>n;

        cin>>arr[1];
        sum[1] = arr[1];

        for(i=2;i<=n;i++)
        {
            cin>>arr[i];
            sum[i] = sum[i-1] + arr[i];
        }

        cin>>by>>bm>>bd;
        cin>>cy>>cm>>cd;

        cout<<days(cy,cm,cd,n,arr,sum)-days(by,bm,bd,n,arr,sum)+1<<endl;
    }
}


