#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,t,a,b,c;
    int i;
    multiset<lli,greater<lli>> maxHeap;
    multiset<lli> minHeap;

    cin>>t;
    t--;
    cin>>a;
    cout<<a<<endl;
    minHeap.insert(a);

    for(i=0;i<t;i++)
    {
        cin>>a;

        if((i+1)%2 != 0)
        {
            if(a > *(minHeap.begin()))
            {
                b = *(minHeap.begin());
                minHeap.erase(b);
                minHeap.insert(a);
                maxHeap.insert(b);
                //cout<<"replacing "<<b<<" with "<<a<<" in minHeap and inserting "<<b<<" in maxHeap\n";
            }
            else
            {
                maxHeap.insert(a);
                //cout<<"inserting "<<a<<" in maxHeap\n";
            }

            c = (*(minHeap.begin()) + *(maxHeap.begin()))/2;
        }
        else
        {
            if(a < *(maxHeap.begin()))
            {
                b = *(maxHeap.begin());
                minHeap.insert(b);
                maxHeap.erase(b);
                maxHeap.insert(a);
                //cout<<"replacing "<<b<<" with "<<a<<" in maxHeap and inserting "<<b<<" in minHeap\n";
            }
            else
            {
                minHeap.insert(a);
                //cout<<"inserting "<<a<<" in minHeap\n";
            }

            c = *(minHeap.begin());
        }

        cout<<c<<endl;

    }

}
