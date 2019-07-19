#include<iostream>
#include<string>
using namespace std;

struct fr
{
    char c;
    long int freq;
};

main()
{
    long int i,n,*arr,j,count=0;
    string s;
    fr f[26];

    cin>>n;
    cin>>s;

    if(n == 1)
    {
        cout<<"YES";
    }

    else
    {
        for(i=0;i<26;i++)
        {
            f[i].c = char(97 + i);
            f[i].freq = 0;
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<26;j++)
            {
                if(s[i] == f[j].c)
                {
                    f[j].freq++;
                    break;
                }
            }
        }

        for(i=0;i<26;i++)
        {
            if(f[i].freq > 1)
            {
                cout<<"YES";
                count++;
                break;
            }
        }

        if(count == 0)
        {
            cout<<"NO";
        }
    }






   /* for(i=0;i<26;i++)
    {
        cout<<f[i].c<<" "<<f[i].freq<<endl;
    } */

}
