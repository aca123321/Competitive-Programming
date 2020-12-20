#include<bits/stdc++.h>

using namespace std;

#define lli long long int

lli n;

void printTable(lli i)
{
    if(i == 11)
    {
        return ;
    }
    printf("%lli x %lli = %lli\n",n,i,n*i);
    printTable(i+1);
}

int main()
{
    cin>>n;
    printTable(1);
}
