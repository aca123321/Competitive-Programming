#include<stdio.h>

struct node
{
    int data;
    struct node *next;
    vertex
};

struct qnode
{
    int data; // i for *(graph + i)
    bool visited;
    struct qnode *next, *pre;
};

struct qnode *first;

struct qnode enqueue(struct node** graph,struct qnode, int val)
{

}
struct node** insert(int , struct node** , int );

void bfs(int val, int** graph, int n)
{
    int arr[n],i;
    struct qnode queue[n];

    for(i=0;i<n;i++)
    {
        arr[i] = 0;
    }

    arr[0] = 1;
    queue = enqueue(graph,queue,0, );


}

void dfs(int val, int** graph, int n)
{

}

main()
{
    int n,a,nadj,i,j,s;
    struct node **graph;

    printf("Enter the number of vertices in the graph\n");
    scanf("%d",&n);

    graph = (struct node**)malloc(n*sizeof(struct node*));

    for(i=0;i<n;i++)
    {
        printf("Enter the number of vertices adjacent to vertex %d\n",i+1);
        scanf("%d",&nadj);
        *(graph+i) = (struct node*)malloc(nadj*sizeof(struct node));
        *(graph + i) = NULL;

        for(j=0;j<nadj;j++)
        {
            printf("Enter data of vertex %d adjacent to vertex %d\n",j+1,i+1);
            scanf("%d",&a);
            graph = insert(a,**graph,i);
        }
    }

    printf("Enter the number of elements you want to search for\n");
    scanf("%d",&a);

    for(i=0;i<a;i++)
    {
        printf("Enter search element %d\n",i+1);
        scanf("%d",&s);
        bfs(graph,s,n);

    }
}

struct node** insert(int x, struct node** graph, int i)
{
    struct node *temp,*travel;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    travel = *(graph + i);

    if(*(graph+i) == NULL)
    {
        *(graph + i) = temp;
    }

    else
    {
        while(travel->next != NULL)
        {
            travel = travel->next;
        }

        travel->next = temp;
    }

    return graph;
}
