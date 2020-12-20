#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,a,t,b,c,j,k,x;
    string s;
    cin>>t;
    stringstream obj;

    while(t--)
    {
        cin>>s;
        obj.clear();
        obj<<s;
        obj>>x;
        n = s.length();
        lli arr[n];
        for(i=0;i<n;i++)
        {
            arr[i] = int(s[i]-'0');
        }

        if(n>=2 && arr[1] == 0)
        {
            s[0] = '1';
            obj.clear();
            obj<<s;
            obj>>x;
            cout<<x<<endl;
        }
        else
        {
            lli maxi = INT_MIN,ind=-1;
            for(i=0;i<n;i++)
            {
                maxi = max(arr[i],maxi);
                ind = i;
            }


        }
    }


}
