#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int l,r,d;
    scanf("%d%d%d",&l,&r,&d);
    int rem=(r+1)%d;
    int ans1;
    if(d<l)
      ans1=d;
    else if(rem==0)
      ans1=r+1;
    else ans1=r+1+(d-rem);
    printf("%d\n",ans1);
  }
}
