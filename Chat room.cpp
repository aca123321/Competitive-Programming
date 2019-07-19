#include<bits/stdc++.h>
using namespace std;

main()
{
    int i,n,count = 0,flag = 0,j;

    string s,t="hello";

    cin>>s;

    n = s.length();

    i=0;
    j=0;

    while((count <5) && (i<n) && (j<5))
    {
        if(s[i] == t[j])
        {
            j++;
            count++;
        }

        if(count == 5)
        {
            flag = 1;
            break;
        }

        i++;
    }

    if(flag == 1)
    {
        cout<<"YES";
    }

    else
    {
        cout<<"NO";
    }
}
