#include<iostream>
#include<string>
using namespace std;

main()
{
    int n,i,count=0;
    string s,t;

    cin>>s>>t;
    n = s.length();

    for(i=0;i<n;i++)
    {
        if(s[i] == t[n-i-1])
            count++;
    }

    if(count == n)
        cout<<"YES";

    else
        cout<<"NO";
}
