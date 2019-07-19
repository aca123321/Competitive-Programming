#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,k,x,i,*arr;

    cin>>t;

    arr = new int[10001];

    while(t--)
    {
        cin>>n>>k;

        deque <int> q;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        for(i=0;i<k;i++)
        {
            while((!q.empty()) && ( arr[i] >= arr[q.back()] ))
            {
                q.pop_back();
            }

            q.push_back(i);
        }

        for(i=k;i<n;i++)
        {
            cout<<arr[q.front()]<<" ";


            while()

        }
    }

    return 0;
}
