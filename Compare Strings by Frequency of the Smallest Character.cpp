#include<bits/stdc++.h>
using namespace std;

vector<int> numSmallerByFrequency(vector<string>& a, vector<string>& b)
{
    int arr[2001], brr[2001],j,i,n,m,sum[11];
        map<char, int> mp;
        n = a.size();
        m = b.size();
        char c;
        for(i=0;i<n;i++)
        {
            c = a[i][0];
            mp.clear();
            for(auto it: a[i])
            {
                if(it < c)
                {
                    c = it;
                    mp[c]++;
                }
                else if(it == c)
                {
                    mp[c]++;
                }
            }
            arr[i] = mp[c];
        }
        for(i=0;i<m;i++)
        {
            c = b[i][0];
            mp.clear();
            for(auto it: b[i])
            {
                if(it < c)
                {
                    c = it;
                    mp[c]++;
                }
                else if(it == c)
                {
                    mp[c]++;
                }
            }
            brr[i] = mp[c];
        }
        for(i=0;i<=10;i++)
        {
            sum[i] = 0;
        }
        for(i=0;i<m;i++)
        {
            sum[brr[i]]++;
        }
        for(i=9;i>=0;i--)
        {
            sum[i] += sum[i+1];
        }
        vector<int> v;
        for(i=0;i<n;i++)
        {
            v.push_back(sum[arr[i]+1]);
        }
        return v;
}

main()
{
    vector<string> a, b;
    vector<int> ans;
    int i,n,m;
    string s;
    cin>>n>>m;

    for(i=0;i<n;i++)
    {
        cin>>s;
        a.push_back(s);
    }
    for(i=0;i<m;i++)
    {
        cin>>s;
        b.push_back(s);
    }
    ans = numSmallerByFrequency(a, b);

    cout<<"Answer:\n";
    for(auto it: ans)
    {
        cout<<it<<" ";
    }
}
