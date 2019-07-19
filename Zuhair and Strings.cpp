#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli i,n,k,a,b,j,count=0,tempmax,max = 0;

    string s,temp;

    char c;

    cin>>n>>k;

    cin>>s;

    for(i=0;i<26;i++)
    {
        c = (char)(97+i);
        tempmax = 0;

        if(k != 1)
        {
            j = 0;

            while(j<n-1)
            {
                if(s[j] == c && (s[j+1] == c))
                {
                    count++;
                    j++;

                    if(count == k-1)
                    {
                        count = 0;
                        tempmax++;
                        j++;
                    }
                }

                    else
                    {
                        count = 0;
                        j++;
                    }
                }

                if(tempmax>max)
                {
                    max = tempmax;
                }
        }

        else
        {
            for(j=0;j<n;j++)
            {
                if(s[j] == c)
                {
                    tempmax++;
                }
            }

            if(tempmax>max)
            {
                max = tempmax;
            }
        }
    }

    cout<<max;

}
