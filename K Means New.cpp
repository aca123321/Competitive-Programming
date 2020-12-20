#include<bits/stdc++.h>
using namespace std;

#define lli long double
#define pb push_back

int n = 4; // number of instances
int k = 2; // number of clusters
int cols = 2    ; // number of features/attributes

lli** arr;

map<int, vector<int>> clusterMembers;
lli m[1000][1000]; // upper limit of first dimension is 'k' and for second dimension, it's 'cols'

lli dist(lli* curVals, lli* clusterVals)
{
    lli ret=0,a;
    int i,j;

    for(i=0;i<cols;i++)
    {
        a = (curVals[i] - clusterVals[i]);
        ret += a*a;
    }

    ret = sqrt(ret);
    return ret;
}

main()
{
    int ind,a,i,j,id,flag=0,assignedCluster[n],sz=0,b,c;
    lli mini, d, val;
    arr = new lli*[n];

    for(i=0;i<n;i++)
    {
        arr[i] = new lli[cols];
        assignedCluster[i] = 0;
        for(j=0;j<cols;j++)
        {
            cin>>arr[i][j];
        }
        if(i<k)
        {
            for(j=0;j<cols;j++)
            {
                m[i][j] = arr[i][j];
            }
        }
    }

    cout<<"starting centroid values:\n";
    for(i=0;i<k;i++)
    {
        cout<<"centroid "<<i+1<<endl;
        for(j=0;j<cols;j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    while(flag == 0)
    {
        flag = 1;

        clusterMembers.clear();

        for(i=0;i<n;i++)
        {
            cout<<"data point "<<i+1<<":\n";
            mini = INT_MAX;
            for(j=0;j<cols;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
            for(j=0;j<k;j++)
            {
                d = dist(arr[i], m[j]);
                cout<<"distance of "<<arr[i][0]<<","<<arr[i][1]<<" from centroid "<<j+1<<" = "<<d<<endl;
                if(d < mini)
                {
                    mini = d;
                    ind = j;
                }
            }
            if(assignedCluster[i] != ind)
            {
                assignedCluster[i] = ind;
                flag = 0;
            }
            cout<<"assigned to centroid "<<assignedCluster[i]+1<<"\n\n";
            clusterMembers[assignedCluster[i]].pb(i);
        }

        cout<<"Clusters:\n";
        a = 1;
        for(auto it: clusterMembers)
        {
            cout<<"cluster "<<a++<<" members:\n";
            vector<int> temp = it.second;
            for(j=0;j<temp.size();j++)
            {
                for(b=0;b<cols;b++)
                {
                    cout<<arr[temp[j]][b]<<" ";
                }
                cout<<endl;
            }
            cout<<endl;
        }

        cout<<"New centroids:\n";
        for(a=0;a<k;a++)
        {
            sz = clusterMembers[a].size();
            for(i=0;i<cols;i++)
            {
                val = 0;
                for(j=0;j<sz;j++)
                {
                    val += arr[clusterMembers[a][j]][i];
                }
                val /= (long double)(sz);
                m[a][i] = val;
            }
            cout<<"centroid "<<a+1<<endl;
            for(i=0;i<cols;i++)
            {
                cout<<m[a][i]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}

/*

1 1
2 1
4 3
5 4


1 1
1.5 2
3 4
5 7
3.5 5
4.5 5
3.5 4.5

*/


