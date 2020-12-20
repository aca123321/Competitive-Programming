#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec secon

struct node
{
    lli data;
    node* next;
};

struct node* start=NULL;

struct node* createNode(lli x)
{
    struct node *ret;
    ret->data = x;
    ret->next = NULL;
    cout<<"created node "<<x<<" at "<<(ret)<<endl;
    return (ret);
}

struct node* getNode(lli x)
{
    struct node* ret;
    struct node* temp = start;
    ret = NULL;
    while(temp != NULL)
    {
        if(temp->data == x)
        {
            ret = temp;
        }
        temp = temp->next;
    }
    return ret;
}

void insertNode(lli x)
{
    struct node* temp = start;
    if(start == NULL)
    {
        start = createNode(x);
        cout<<start->data<<endl;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = createNode(x);
    }
}

void dispList()
{
    struct node* temp=start;
    while(temp != NULL)
    {
        cout<<temp->data<<" -> ";
    }
    cout<<"NULL\n";
}

main()
{
    lli i;

    for(i=0;i<8;i++)
    {
        insertNode(i+1);
    }
    dispList();

}
