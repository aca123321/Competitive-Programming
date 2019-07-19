#include<iostream>
#include<string>
using namespace std;

main()
{
    int n,m,i,j,cl,cr,rt,rb,c=0,d=0;
    string *s;
    cin>>n>>m;

    s = new string[n];

    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }

    cr = m;
    rb = n;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(s[i][j] == 'B')
            {
                if(c == 0)
                {
                    c++;
                    cl = j+1;
                }

                if(d == 0)
                {
                    d++;
                    rt = i+1;
                }

                if(s[i][j+1] == 'W')
                {
                    cr = j+1;
                }

                if(s[i+1][j] == 'W')
                {
                    rb = i+1;
                }
            }
        }
    }

    c = (rt+rb)/2;
    d = (cl+cr)/2;

    cout<<c<<" "<<d;
}
