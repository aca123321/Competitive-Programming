#include<bits/stdc++.h>
using namespace std;

#define lli int

main()
{
    lli i,n,a,c,count=0,num=0;
    lli arr[5002]={0};

    vector<lli> v;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a;
        if(v.size() == 0)
        {
            v.push_back(a);
        }

        else
        {
            if(v[v.size()-1] != a)
            {
                v.push_back(a);
            }
        }
    }

    for(i=0;i<v.size();i++)
    {
        arr[v[i]] = arr[v[i]] + 1;
    }

    lli maxi = INT_MIN;

    for(i=1;i<5002;i++)
    {
        if(arr[i] > maxi)
        {
            c = i;
            maxi = arr[i];
        }
    }

    for(i=0;i<n;i++)
    {
        if(v[i] == c)
        {
            num++;
        }
    }

    if(v[0] == c)
    {
        if(v[v.size()-1] == c)
        {
            num--;
        }
    }

    else
    {
        if(v[v.size()-1] != c)
        {
            num++;
        }
    }

    vector<lli> vec[num];
    lli j=0;

    for(i=0;i<v.size();i++)
    {
        if(v[i] != c)
        {
            vec[j].push_back(v[i]);
        }

        else
        {
            if(i != 0)
            {
                j++;
            }
        }
    }
/*
    for(i=0;i<num;i++)
    {
        for(j=0;j<vec[i].size();j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
*/
    for(i=0;i<num;i++)
    {
        for(j=0;j<vec[i].size();j++)
        {
            if(j<=vec[i].size()-3)
            {
                if(vec[i][j] == vec[i][j+2])
                {
                    count++;
                    j++;
                }

                else
                {
                    count++;
                }
            }

            else
            {
                if(j >= vec[i].size()-2)
                {
                    count +=2;
                    break;
                }
            }
        }
    }

    cout<<count;
}
