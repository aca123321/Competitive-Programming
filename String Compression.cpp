#include<iostream>
#include<string>
using namespace std;

main()
{
    int i,j,t,l,a,n,*ans,count;
    string s;

    cin>>t;
    ans = new int[t];

    for(l=0;l<t;l++)
    {
        cin>>s;

        count = 0;

        n = s.length();

        for(j=0;j<n;j++)
        {
            if(s[j] != '#')
            {
                a = 0;

                for(i=j+1;i<n;i++)
                {
                    if(s[i] == s[j])
                    {
                        s[i] = '#';
                        a++;
                    }
                }

                s[j] = '#';

                if(a > count)
                {
                    count = a;
                }
            }
        }

        ans[l] = n - count - 1;
    }

    for(i=0;i<t;i++)
    {
        cout<<ans[i]<<endl;
    }
}
