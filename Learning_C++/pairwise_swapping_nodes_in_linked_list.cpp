#include<bits/stdc++.h>
using namespace std;

#define lli long long int

struct node
{
    lli data;
    node* next;
};

node* createNode(lli d)
{
    node* ret = new node;
    ret->data = d;
    ret->next = NULL;
    return ret;
}

void display(node* start)
{
    node* temp;
    temp = start;
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}

main()
{
    node *first,*second,*start,*pre=NULL;
    lli temp;

    start = createNode(1);
    start->next = createNode(2);
    start->next->next = createNode(3);
    start->next->next->next = createNode(4);

    first = start;
    second = first->next;

    if(second != NULL)
    {
        start = second;
    }

    while(first != NULL && second != NULL)
    {
        first->next = second->next;
        second->next = first;
        if(pre != NULL)
        {
            pre->next = second;
        }
        pre = first;
        first = first->next;
        if(first->next != NULL)
        {
            second = first->next;
        }
    }

    display(start);
}
