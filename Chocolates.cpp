#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define s second
#define pb push_back
#define mp make_pair

lli solve(lli a, lli count)
{
    lli b,c;

    if(a <= count )
    {
        return (((a)*(a+1))/2);
    }

    else
    {
        b = (a-count);
        c = (((b)*(b+1))/2);
    }

    return ((((a)*(a+1))/2) - c);
}

main()
{
    lli n,i,lowest=INT_MAX,sum=0,dis=0,count = 0;
    cin>>n;
    lli arr[n],brr[n];
    map<lli , lli> m;
    vector<lli> v,vans;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];

        if(arr[i] < lowest)
        {
            lowest = arr[i];
        }

        m[arr[i]]++;
    }

    dis = m.size();

    i = 0;
    for(auto it: m)
    {
        brr[i] = it.f;
        i++;
    }

    sort(brr,brr+dis);

    lli j =0;
    lowest = brr[j];

    v.pb(-1);

    count = 0;
    for(i=0;i<n;i++)
    {
        count ++;
        if(i == (n-1))
        {
            sum += arr[i];
        }

        else if(arr[i] == lowest)
        {
            if(m[lowest] == 1)
            {
                m[lowest]--;
                v.pb(i);

                sum += solve(arr[i],count);

                while(j<dis)
                {
                    if(m[brr[j]]<1)
                    {
                        j++;
                    }
                    else
                    {
                        break;
                    }
                }
                if(j>=dis)
                {
                    lowest = brr[dis-1];
                }
                else
                {
                    lowest = brr[j];
                }
                count = 0;
            }

            else
            {
                m[arr[i]]--;
            }
        }

        else
        {
            m[arr[i]]--;
        }
    }


    cout<<sum;
}
