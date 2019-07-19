#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back

main()
{
    lli n,i,a,mini=INT_MAX,j;
    string s;

    cin>>n;

    cin>>s;

    for(i=0;i<=(n-4);i++)
    {
        a = 0;

        a += min(abs(int(s[i]) - int('A')),26 - abs(int(s[i]) - int('A')));
        a += min(abs(int(s[i+1]) - int('C')),26 - abs(int(s[i+1]) - int('C')));
        a += min(abs(int(s[i+2]) - int('T')),26 - abs(int(s[i+2]) - int('T')));
        a += min(abs(int(s[i+3]) - int('G')),26 - abs(int(s[i+3]) - int('G')));

        mini = min(a, mini);
    }

    cout<<mini;


}
