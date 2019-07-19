#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,i,a=1,b=1;

    string s;
    cin>>s;
    n = s.length();

    for(i=0;i<n;i++)
    {
        if(s[i] == '0')
        {
            cout<<1<<" "<<a<<endl;
            a++;

            if(a == 5)
            {
                a = 1;
            }
        }

        else
        {
            cout<<3<<" "<<b<<endl;
            b += 2;

            if(b == 5)
            {
                b = 1;
            }
        }
    }
}
