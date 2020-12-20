#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

lli n, arr[100001], k, retind;
string s[100001];

lli sum(string s)
{
    lli i,N,ret=0;
    N = s.length();

    for(i=0;i<N;i++)
    {
        ret += int(s[i])-int('a') + 1;
    }
    return ret;
}

lli f()
{
    lli med1,med2,med,val,i,j,a,b,mini=INT_MAX,c;

    if(n%2 != 0)
    {
        med1 = (n-1)/2;
        med2 = med1-1;

        if(k <= med2)
        {
            med2++;
            med1++;
        }
        else if(k == med1)
        {
            med1++;
        }

        a = arr[med2] + arr[med1];
        a /= 2;
        b = a+1;

        c = 0;
        for(i=0;i<n;i++)
        {
            if(i != k)
            {
                c += abs(arr[i]-a);
            }
        }
        mini = min(mini, c);

        c=0;
        for(i=0;i<n;i++)
        {
            if(i != k)
            {
                c += abs(arr[i]-b);
            }
        }
        mini = min(mini, c);
        retind = k;
        return mini;
    }

    else // number of elements is even
    {
        med = (n-1)/2;
        a = arr[med];

        c = 0;
        for(i=0;i<n;i++)
        {
            if(i != k)
            {
                c += abs(arr[i]-a);
            }
        }
        retind = k;
        return c;
    }
}

main()
{
    lli t,i,j,a,b,ans,mini;
    map<lli, string> m;

    cin>>t;

    while(t--)
    {
        cin>>n;

        m.clear();
        mini = INT_MAX;
        for(i=0;i<n;i++)
        {
            cin>>s[i];
            arr[i] = sum(s[i]);
            m[arr[i]] = s[i];
        }
        sort(arr, arr+n);

        cout<<m[arr[ans]]<<endl;
    }
}

/*
1
5
chakshu
pekka
punk
golem
tyagi
*/
