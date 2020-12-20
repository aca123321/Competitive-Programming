#include<bits/stdc++.h>
using namespace std;

#define lli long double

main()
{
    lli x,a,b,ans,sum=0;
    int n,i,j;

    int freqArr[] = {3, 2, 2};

    n = sizeof(freqArr)/sizeof(freqArr[0]);

    lli probArr[n], entropy[n], ent=0;

    for(i=0;i<n;i++)
    {
        sum += freqArr[i];
    }

    cout<<"Probability:\n";
    for(i=0;i<n;i++)
    {
        probArr[i] = (freqArr[i]/sum);
        cout<<freqArr[i]<<": "<<probArr[i]<<endl;
    }

    cout<<"\nEntropy:\n";
    for(i=0;i<n;i++)
    {
        if(probArr[i] == 0)
        {
            entropy[i] = 0;
        }
        else
        {
            entropy[i] = -(probArr[i]*(log2(probArr[i])));
        }
        cout<<freqArr[i]<<": "<<entropy[i]<<endl;
        ent += entropy[i];
    }

    cout<<"\nTotal Entropy = "<<ent<<endl;
}
