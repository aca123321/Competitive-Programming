#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define lli long long int
#define f first
#define s second

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'pthFactor' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. LONG_INTEGER n
 *  2. LONG_INTEGER p
 */

long pthFactor(long n, long p) {
    lli i;
    vector<lli> v;

    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            if (n/i == i)
                v.pb(i);
            else
            {
                v.pb(i);
                v.pb(n/i);
            }
        }
    }

    sort(v.begin(),v.end());

    for(auto it: v)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    if(p > v.size())
    {
        return 0;
    }

    return v[p-1];
}

main()
{
    lli a;

    a = pthFactor(24,8);

    cout<<a;
}
