#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

lli arr[200001][10];

lli ctoi(char c)
{
    return (int)(c)-48;
}

main()
{
    lli n,i,t,a,b,j,k,l,maxi;

    cin>>t;
    string s,pat,mod,temp;
    char c,d;

    while(t--)
    {
        cin>>s;
        n = s.length();

        c = s[0];
        a = ctoi(c);
        for(i=0;i<10;i++)
        {
            if(i == a)
            {
                arr[0][i] = 1;
            }
            else
            {
                arr[0][i] = 0;
            }
        }

        for(i=1;i<n;i++)
        {
            c = s[i];
            a = ctoi(c);
            for(j=0;j<10;j++)
            {
                if(j == a)
                {
                    arr[i][j] = arr[i-1][j] + 1;
                }
                else
                {
                    arr[i][j] = arr[i-1][j];
                }
            }
        }

        maxi = 2;

        for(i=0;i<n;i++)//continuous case covered + odd
        {
            for(j=0;j<10;j++)
            {
                maxi = max(maxi, arr[i][j]);
            }
        }

        for(j=0;j<10;j++) // for odd cases
        {
            for(k=0;k<10;k++)
            {
                if(j != k)
                {
                    c = (char)(48+j);
                    d = (char)(48+k);

                    pat = c+d;

                    mod = s;
                    temp = "";
                    for(i=0;i<n;i++)
                    {
                        if(mod[i] == c || mod[i] == d)
                        {
                            temp += mod[i];
                        }
                    }

                    i=0;
                    b = 0;
                    while(i<temp.length())
                    {
                        if(temp[i] == c && temp[i+1] == d)
                        {
                            b++;
                            i+=2;
                        }
                        else
                        {
                            i++;
                        }
                    }
                    maxi = max(maxi, 2*b);
                }
            }
        }

        cout<<n-maxi<<endl;

    }

}
