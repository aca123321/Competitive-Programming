#include<bits/stdc++.h>
using namespace std;

main()
{
    int t,n,i,k,now,pre,flag,a,p,q;
    string *str;

    cin>>t;
    str = new string[t];

    for(k=0;k<t;k++)
    {
        cin>>str[k];
        flag = 0;
        a = 0;
        pre = INT_MIN;
        p = q = 0;
        n = str[k].length();

        for(i=0;i<n;i++)
        {
            if(str[k][i] >= 48 && str[k][i] <= 57)
            {
                if(flag != 0)
                {
                    pre = now;
                    q = p;
                }

                now = str[k][i] - '0';
                p = i;
                if((pre + now) > (p-q-1))
                {
                    a++;
                    break;
                }

                flag++;
            }
        }

        if(a != 0)
        {
            cout<<"unsafe\n";
        }

        else
        {
            cout<<"safe\n";
        }
    }
}
