#include<bits/stdc++.h>
using namespace std;

#define lli int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,a,t,b,c,j,k;

    cin>>t;
    string s;
    stringstream obj;
    lli flag = 0;

    while(t--)
    {
        cin>>s;
        n = s.length();
        lli arr[n]={0};
        flag = 0;
        for(i=0;i<n;i++)
        {
            if(s[i] != '.')
            {
                obj.clear();
                obj<<s[i];
                obj>>a;
                for(j=max(0,(i-a));j<=min(n-1,(i+a));j++)
                {
                    arr[j]++;
                    if(arr[j]>1)
                    {
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag == 1)
            {
                break;
            }
        }

        if(flag == 1)
        {
            cout<<"unsafe\n";
        }
        else
        {
            cout<<"safe\n";
        }
    }
}
