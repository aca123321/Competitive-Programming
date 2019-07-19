#include<iostream>
#include<string>
using namespace std;


main()
{
    int t,n,i,j,k,l,count;
    string s;

    cin>>t;

    string ans[t];

    for(i=0;i<t;i++)
    {
        cin>>n;
        cin>>s;

        count = 0;

        for(j=0;j<n/2;j++)
        {
           if((s[j]-s[n-1-j] == 2) || (s[n-1-j] - s[j] == 2) || (s[j]-s[n-1-j] == 0) || (s[n-1-j] - s[j] == 0))
           {
                count++;
           }
        }

        if(count == (n/2))
        {
            ans[i] = "YES";
        }

        else
        {
            ans[i] = "NO";
        }
    }

    for(i=0;i<t;i++)
    {
        cout<<ans[i]<<endl;
    }
}
