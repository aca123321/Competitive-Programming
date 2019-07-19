#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define s second
#define f first

main()
{
    lli n,i,nodd=0;
    string s;
    cin>>s;
    lli arr[26]={0};
    n = s.length();

    for(i=0;i<n;i++)
    {
        arr[int(s[i])-int('a')]++;
    }

    for(i=0;i<26;i++)
    {
        if(arr[i] != 0 && arr[i]%2 != 0)
        {
            nodd++;
        }
    }

    if(nodd == 1 || nodd == 0)
    {
        cout<<"First";
    }

    else
    {
        if(nodd%2 == 0)
        {
            cout<<"Second";
        }
        else
        {
            cout<<"First";
        }
    }
}
