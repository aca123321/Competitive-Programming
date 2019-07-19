#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define s second

main()
{
    lli n,m,i,j,k=0,count=0,a,prea,preb,max=INT_MIN;

    cin>>n>>m;

    vector <pair <lli,lli> > va,vb;

    for(i=0;i<n;i++)
    {
        cin>>a;
        va.push_back(make_pair(a,i));
    }

    for(i=0;i<m;i++)
    {
        cin>>a;
        vb.push_back(make_pair(a,i));
    }

    sort(va.begin(),va.end());
    sort(vb.begin(),vb.end());

    for(i=0;i<n;i++)
    {
        j = 0;
        if(count == (n+m-1))
        {
            break;
        }

        else
        {
            if(i <= n-2)
            {
                while(va[i+1].f >= vb[j].f )
                {
                    if(va[i+1].f+vb[j].f > max && (j<m))
                    {
                        if(count != (n+m-2))
                        {
                            cout<<va[i].s<<" "<<vb[j].s<<endl;
                        }
                        else
                        {
                            cout<<va[i].s<<" "<<vb[j].s;
                        }
                        max = va[i+1].f+vb[j].f;
                        count++;
                    }

                    j++;
                }
            }

            else
            {
                while(va[i].f >= vb[j].f )
            {
                if(va[i].f+vb[j].f > max && (j<m))
                {
                    if(count != (n+m-2))
                    {
                        cout<<va[i].s<<" "<<vb[j].s<<endl;
                    }
                    else
                    {
                        cout<<va[i].s<<" "<<vb[j].s;
                    }
                    max = va[i].f+vb[j].f;
                    count++;
                }

                j++;
            }
            }
        }
    }

}

