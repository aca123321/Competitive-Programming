#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

lli prodofdigits(lli n)
{

    if((n/10) == 0)
    {
        return n;
    }

    else
    {
        return ((n%10)*(prodofdigits(n/10)));
    }
}

main()
{
    lli n,x,i,mini=INT_MAX,a,b,j,count=0,flag = 0;

    cin>>n;
    lli arr[11]={0};
    x = n;
    vector<lli> v,pos;

    while((x/10)!=0)
    {
        count++;
        x /= 10;
    }
    count++;
    arr[count] = 1;

    i = 0;

    while((n/10) != 0)
    {
        a = n%10;
        n /= 10;
        arr[count-1-(i)] = a;
        i++;
    }
    arr[0] = n;

    b = 1;
    i = 0;

    if(count == 1)
    {
        cout<<arr[0];
        return 0;
    }

    a = 1;
    lli c = arr[0];

    while(i < count)
    {
        c *= arr[i+1];
        a *= 9;

        if(c >= a)
        {
            i++;
        }

        else
        {
            if(arr[i+1] != 0)
            {
                arr[i+1]--;
                i++;
            }

            else
            {
                arr[i]--;
            }

            while(i < count)
            {
                i++;
                arr[i] = 9;
            }
            break;
        }
    }

    b = 1;

    if(arr[0] == 0)
    {
        for(i=1;i<count;i++)
        {
            b *= arr[i];
        }
    }

    else
    {
        for(i=0;i<count;i++)
        {
            b *= arr[i];
        }
    }

    cout<<b;
}
