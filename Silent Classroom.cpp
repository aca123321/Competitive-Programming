#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,arr[26]={0},a,b,sum=0;
    cin>>n;
    string s;

    for(i=0;i<n;i++)
    {
        cin>>s;
        arr[int(s[0])-int('a')]++;
    }

    for(i=0;i<26;i++)
    {
        n = arr[i];
        if(n>2)
        {
            if(n == 3)
            {
                sum++;
            }
            else
            {
                a = n/2;
                b = n - a;
                sum += (a*(a-1))/2;
                sum += (b*(b-1))/2;
            }
        }
    }

    cout<<sum;

}
