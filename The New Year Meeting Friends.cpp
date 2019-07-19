#include<bits/stdc++.h>
using namespace std;

main()
{
   int a,b,c,realans,med;

   cin>>a>>b>>c;

   if(a>b)
   {
       if(b>c)
       {
           med = b;
       }

       else
       {
           if(a>c)
           {
               med = c;
           }

           else
           {
               med = a;
           }
       }
   }

   else
   {
       if(c>b)
       {
           med = b;
       }

       else
       {
           if(a>c)
           {
               med = a;
           }

           else
           {
               med = c;
           }
       }
   }

   realans = abs(a - med) + abs(b - med) + abs(c - med);

   cout<<realans;
}
