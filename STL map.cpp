#include<bits/stdc++.h>
using namespace std;

main()
{
    int i;

    map <int, int> mymap; // declaring 2 maps

    map <int, int> :: iterator itr; // defining an iterator for a map <int ,int>

    for(i=0;i<8;i++) //inserting elements in the map
    {
        mymap.insert(pair <int,int> (i+1, 3*(i+1)));
    }

    for(itr = mymap.begin();itr != mymap.end();itr++) //using iterator in the for loop
    {
        cout<<"Key is "<<itr->first<<" and value is "<<itr->second<<endl;
    }

    cout<<endl;

    map <int, int> mymap2(mymap.begin(),mymap.end()); // initialising a second map (mymap2) with the help of first map (mymap)

    for(itr = mymap2.begin(); itr != mymap2.end(); itr++)
    {
        cout<<"Key is "<<itr->first<<" and value is "<<itr->second<<endl;
    }

    cout<<endl;

    // mymap2.find(3) returns an iterator to element with key value 3
    // mymap2.erase(mymap2.begin(),mymap2.find(3)); excludes the last element (ie. element with key value 3 while erasing)
    // try changing 3 with 4 or 5

    mymap2.erase(mymap2.begin(),mymap2.find(3));

    for(itr = mymap2.begin(); itr != mymap2.end(); itr++)
    {
        cout<<"Key is "<<itr->first<<" and value is "<<itr->second<<endl;
    }

    itr = mymap2.end();
    itr--;

    cout<<itr->second;
}
