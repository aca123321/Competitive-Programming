#include<bits/stdc++.h>
using namespace std;

main()
{
    string str;
    int n,i,count=0;

    cin>>str;

    n = str.length();


        for(i=0;i<(n/2);i++)
        {
            if(str[i] != str[n-1-i])
            {
                count++;

                if(count == 2)
                {
                    break;
                }
            }
        }

        if(count == 1)
        {
            cout<<"YES";
        }

        else
        {
            cout<<"NO";
        }



}
