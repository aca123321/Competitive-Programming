#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

lli arr[1000000];

int main()
 {
    lli n,i,a,b,c,m,j,k,t,flag;
    vector<lli> v;
    cin>>t;

    //ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while(t--)
    {
        cin>>n;
        v.clear();

        for(i=0;i<n;i++)
        {
            cin>>a;
            v.pb(a);
        }

        i = 0;

        while(i<n)
        {
            if(v[i]>=b)
            {
                b = v[i];
            }
            arr[i] = b+i;
            i++;
            b--;
        }

        lli count = 0;
        i = 0;
        lli ind = 0;
        flag = 0;
        lli pre = 0;
        a = arr[0];
        i= 0;

        while(1)
        {
            if(arr[pre] >= n-1)
            {
                count++;
                break;
            }

            while(i<=arr[pre])
            {
                if(arr[i]>a)
                {
                    a = arr[i];
                    ind = i;
                }
                i++;
            }
            if(arr[ind] <= arr[pre])
            {
                cout<<-1<<endl;
                flag = 1;
                break;
            }
            pre = ind;
            count++;
        }

        if(flag == 0)
        {
            cout<<count<<endl;
        }

    }


	return 0;
}
