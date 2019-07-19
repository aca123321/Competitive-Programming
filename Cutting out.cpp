#include<bits/stdc++.h>
using namespace std;

#define lli long long int

struct two
{
    lli num=0,count=0;
};

bool comp(struct two ,struct two);

main()
{
    lli n,k,i,*arr,x=0;

    cin>>n>>k;

    two *brr = new two[200001];

    arr = new lli[n];
    brr = new two[200001];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        brr[arr[i]].num = arr[i];
        brr[arr[i]].count = brr[arr[i]].count + 1;
    }

    sort(brr,brr+200001,comp);

    x = brr[]

    for(i=0;i<k;i++)
    {
        cout<<brr[i].num<<" ";
    }

}


bool comp(struct two a ,struct two b)
{
    if(a.count > b.count)
    {
        return true;
    }

    return false;
}
