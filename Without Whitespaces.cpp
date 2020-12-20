#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

lli n,i,a,t,b,j,nc=0,c,k;
vector<lli> v[100001],ind[10000];

void printCombinations(char* input, int index,
                     char* output, int outLength)
{
    // no more digits left in input string
    if (input[index] == '\0')
    {
        // print output string & return
        output[outLength] = '\0';
        cout << output << endl;
        return;
    }

    // place current digit in input string
    output[outLength] = input[index];

    // separate next digit with a space
    output[outLength + 1] = ' ';

    printCombinations(input, index + 1, output,
                                   outLength + 2);

    // if next digit exists make a
    // call without including space
    if(input[index + 1] != '\0')
    printCombinations(input, index + 1, output,
                                    outLength + 1);

}

main()
{
    cin>>n;
    string s;
    cin>>s;
    cin>>k;
    cin>>c;
    a = c;
    while(a != 0)
    {
        a /= 10;
        nc++;
    }

    printCombinations(input, 0, output, 0);

/*
    for(i=0;i<n;i++)
    {
        v[0].pb(int(s[i]-'0'));
    }

    for(i=1;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            v[i].pb(v[i-1][j]*10 + v[0][i+j]);
        }
    }

    for(i=nc-1;i<n;i++)
    {
        for(j=0;j<v[i].size();j++)
        {
            if(v[i][j] <= c)
            {
                ind[i].pb(j);
            }
        }
    }
*/


}
