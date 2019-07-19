#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

vector<char> get(char c)
{
    vector<char> v;
    v.clear();

    if(c == 'R')
    {
        v.pb('P');
        v.pb('R');
    }
    else if(c == 'P')
    {
        v.pb('S');
        v.pb('P');
    }
    else
    {
        v.pb('R');
        v.pb('S');
    }

    return v;
}

main()
{
    lli n,i,t,j,k,b,maxi,mini,dist;
    string s,*a;
    lli arr[3];
    cin>>t;
    vector<vector<char>> v;

    for(k=0;k<t;k++)
    {
        s = "";
        cin>>n;
        a = new string[n];
        v.clear();

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        maxi = a[0].length();
        mini = a[0].length();

        for(i=0;i<n;i++)
        {
            if(a[i].length() > maxi)
            {
                mini = maxi;
                maxi = a[i].length();
            }
        }

        lli lim = ((maxi*mini)/__gcd(maxi,mini));

        for(i=0;i<n;i++)
        {
            while(a[i].length() < lim)
            {
                a[i] += a[i];
            }
        }

        lli flag = 0;

        for(i=0;i<lim;i++)
        {
            for(j=0;j<3;j++)
            {
                arr[j] = 0;
            }
            dist = 0;
            v.pb(get(a[0][i]));
            for(j=0;j<n;j++)
            {
                if(a[j][i] == 'R')
                {
                    arr[0]++;
                }
                else if(a[j][i] == 'P')
                {
                    arr[1]++;
                }
                else
                {
                    arr[2]++;
                }
            }

            for(j=0;j<3;j++)
            {
                if(arr[j]>0)
                {
                    dist++;
                }
            }

            if(dist == 1)
            {
                s += v[i][0];
            }
            else if(dist == 2)
            {
                s += v[i][1];
            }
            else
            {
                cout<<"Case #"<<k+1<<": "<<"IMPOSSIBLE\n";
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            cout<<"Case #"<<k+1<<": "<<s<<endl;
        }
    }

}
