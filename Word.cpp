#include<iostream>
#include<string>
using namespace std;

main()
{
    string s;
    int n,i,u=0,l=0;

    cin>>s;

    n = s.length();

    for(i=0;i<n;i++)
    {
        if((s[i]>64)&&(s[i]<91))
            u++;

        else
            l++;
    }

    if(l>=u)
    {
        for(i=0;i<n;i++)
        {
            if((s[i]>64)&&(s[i]<91))
                s[i] += 32;
        }
    }

    else
    {
        for(i=0;i<n;i++)
        {
            if((s[i]>96)&&(s[i]<123))
                s[i] -= 32;
        }
    }

    cout<<s;
}
