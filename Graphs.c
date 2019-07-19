#include<stdio.h>

void inp_mat_know(int);
void inp_mat_askifedge(int);
void inp_mat_adjvertices(int);
void disp_mat(int** , int);

void inp_list_know(int);
void inp_list_askifedge(int);
void inp_list_adjvertices(int);
void disp_list(struct node*, int);

int* newnode(int );

struct node
{
    int data;
    struct node* next;
};

main()
{
    int i , n;

    printf("Enter the number of nodes\n");
    scanf("%d",&n);

    printf("Choose any of the 6 input methods by choosing a number from 1 to 6\n");
    scanf("%d",&i);

    switch(i)
    {
        case 1: inp_mat_know(n);
        break;

        case 2: inp_mat_askifedge(n);
        break;

        case 3: inp_mat_adjvertices(n);
        break;

        case 4: inp_list_know(n);
        break;

        case 5: inp_list_askifedge(n);
        break;

        case 6: inp_list_adjvertices(n);
        break;
    }
}

void disp_mat(int** graph, int n)
{
    int i,j;

    printf("The graph is:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",*(*(graph + i) + j));
        }
    }
}

void disp_list(struct node** graph , int n)
{
    int i, j;
    struct node* temp;

    temp = graph;

    while(temp != NULL)
    {

    }
}

node* newnode(int val)
{
    struct node* temp;
    temp = (int*)malloc(sizeof(int));
    temp->data = val;
    return temp;
}
