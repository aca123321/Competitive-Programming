#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli t,n,i,*arr,countr,countg,flag;

    string str;

    cin>>t;

    while(t--)
    {
        cin>>str;

        n = str.length();

        countr = countg = 0;

        flag = 0;

        if(n%2 != 0)
        {
            cout<<"no\n";
        }

        else
        {
            for(i=0;i<n-1;i++)
            {
                if(str[i] == str[i+1])
                {
                    if(str[i] == 'R')
                    {
                        countr++;
                    }

                    else
                    {
                        countg++;
                    }

                    if((countr >= 2) || (countg >= 2))
                    {
                        cout<<"no\n";
                        flag = 1;
                        break;
                    }
                }
            }

            if(flag == 0)
            {
                if(str[n-1] == str[0])
                {
                    if(str[i] == 'R')
                    {
                        countr++;
                    }

                    else
                    {
                        countg++;
                    }

                    if((countr >= 2) || (countg >= 2))
                    {
                        cout<<"no\n";
                        flag = 1;
                    }
                }

            }

            if(flag == 0)
            {
                cout<<"yes\n";
            }

        }

    }

}
