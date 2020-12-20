#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

lli arr[300001], num;

void update(lli i, lli val)
{
    i = (i+num-1);
    arr[i] = val;
    i /= 2;
    while(i != 0)
    {
        if(arr[i] > min(arr[2*i], arr[(2*i)+1]))
        {
            arr[i] = min(arr[2*i], arr[(2*i)+1]);
        }
        else
        {
            break;
        }
        i /= 2;
    }
}

lli minimum(lli i, lli j)
{
    lli l,r,a,b;
    i = (i+num-1);
    j = (j+num-1);
    l = arr[i];
    r = arr[j];

    while(i<=j)
    {
        if(i%2 != 0)
        {
            l = min(l, arr[i]);
            i++;
        }
        if(j%2 == 0)
        {
            r = min(r, arr[j]);
            j--;
        }
        i /= 2;
        j /= 2;
    }

    return min(l,r);
}

main()
{
    lli n,i,j,t,a,b, count;

    cin>>n;
    num = round(pow(2, ceil(log(n)/log(2))));

    count = 0;
    for(i=num;count<n;i++)
    {
        cin>>arr[i];
        count++;
    }
    for(i=i;i<=(2*num);i++)
    {
        arr[i] = INT_MAX;
    }

    for(i=num-1;i>0;i--)
    {
        arr[i] = min(arr[2*i], arr[(2*i)+1]);
    }

    cin>>t;

    while(t--)
    {
        cin>>a>>b;
        a++;
        b++;
        cout<<minimum(a,b)<<endl;
    }

}
