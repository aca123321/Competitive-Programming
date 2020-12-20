#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

lli arr[530001], num, brr[200001],k;

void update(lli i, lli val)
{
    i += num;
    arr[i] = val;
    i /= 2;

    while(i != 0)
    {
        arr[i] = max(arr[2*i], arr[(2*i)+1]);
        i /= 2;
    }
}

lli maxi(lli a, lli b)
{
    lli ret;
    a += num;
    b += num;
    ret = max(arr[a],arr[b]);

    while(a <= b)
    {
        if(a%2 != 0)
        {
            ret = max(ret, arr[a]);
            a++;
        }
        if(b%2 == 0)
        {
            ret = max(ret, arr[b]);
            b--;
        }
        a /= 2;
        b /= 2;
    }
    return ret;
}

lli bin_search(lli start, lli end)
{
    lli a, mid = (start+end)/2;

    if(end == start)
    {
        if(maxi(mid,mid) >= k)
        {
            //cout<<"Found at "<<mid+num<<endl;
            return mid;
        }
        else
        {
            //cout<<"Not Found\n";
            return -1;
        }
    }
    else if(end == start+1)
    {
        if(maxi(start,start) >= k)
        {
            //cout<<"Found at "<<start+num<<endl;
            return start;
        }
        else if(maxi(end, end) >= k)
        {
            //cout<<"Found at "<<end+num<<endl;
            return end;
        }
        else
        {
            //cout<<"Not Found\n";
            return -1;
        }
    }

    if(maxi(start, mid) >= k)
    {
        //cout<<"Searching in start="<<start+num<<", mid="<<mid+num<<endl;
        a = bin_search(start, mid);
    }
    else
    {
        //cout<<"Searching in (mid+1)="<<mid+1+num<<", end="<<end+num<<endl;
        a = bin_search(mid+1, end);
    }
    return a;
}

int main()
{
    lli n,i,j,t,a,b,count;

    cin>>n>>t;

    num = round(pow(2,ceil(log(n)/log(2))));

    //cout<<"num = "<<num<<endl;

    count = 0;
    for(i=num;count<n;i++)
    {
        cin>>arr[i];
        count++;
    }

    for(i=i;i<=(2*num)-1;i++)
    {
        arr[i] = INT_MIN;
    }

    for(i=num-1;i>=1;i--)
    {
        arr[i] = max(arr[2*i], arr[(2*i)+1]);
    }

    for(i=0;i<t;i++)
    {
        cin>>brr[i];
    }

    for(i=0;i<t;i++)
    {
        /*
        for(j=1;j<=(2*num)-1;j++)
        {
            cout<<"("<<j<<","<<arr[j]<<") ";
        }
        cout<<endl;
        */

        k = brr[i];
        a = bin_search(0,n-1);
        if(a == -1)
        {
            cout<<0<<" ";
        }
        else
        {
            cout<<a+1<<" ";
            update(a, arr[a+num]-k);
        }
    }

}
