#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,k,i,j,l,a=0;

    cin>>n;

    k = (2*n) - 2;

    int flag[k] = {0};

    string s[k],s1,s2;

    for(i=0;i<k;i++)
    {
        cin>>s[i];

        l = s[i].length();

        if(l == (n-1) && a == 0)
        {
            s1 = s[i];
        }

        if(l == (n-1) && a == 1)
        {
            s2 = s[i];
        }



    }


}
