#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,i,*arr;
    string s,hard= "hard",;
    map<char, lli> m;

    cin>>n;
    arr = new lli[n];

    cin>>s;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];

        if(m.find(s[i]) == m.end())
        {
            m.insert(make_pair(s[i],1));
        }

        else
        {
            m[s[i]]++;
        }
    }

    while()



}
