#include<stdio.h>

struct queue
{
    int items[50];
    int front, rear;
};

struct node
{
    int vertex;
    struct node *next;
};

struct graph
{
    int v_no;
    struct node** adjlist;
    int* visited;
};



struct queue* createQueue();
struct node* createNode(int );
void enqueue(struct queue* , int);
int dequeue(struct queue* );
void display(struct queue* );
int isEmpty(struct queue* );
struct graph* createGraph(int);
void addEdge(struct graph*, int, int);
void printGraph(struct graph*);
void bfs(struct graph*, int);


int main()
{
    int n,a,i,j;

    printf("Enter the number of vertices\n");
    scanf("%d",&n);

    struct graph *g = createGraph(n);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            printf("Enter 1 if an edge exists between vertex %d and vertex %d. Press 0 otherwise\n",i+1,j+1);
            scanf("%d",&a);

            if(a == 1)
            {
                addEdge(g,i,j);
            }
        }
    }

    bfs(g, 0);

    return 0;
}

void bfs(struct graph* g, int startVertex)
{
    struct queue* q = createQueue();

    g->visited[startVertex] = 1;
    enqueue(q, startVertex);

    while(!isEmpty(q))
    {
        int currentVertex = dequeue(q);
        printf("Visited %d\n", currentVertex+1);

       struct node* temp = g->adjlist[currentVertex];

       while(temp)
       {
            int adjVertex = temp->vertex;

            if(g->visited[adjVertex] == 0)
            {
                g->visited[adjVertex] = 1;
                enqueue(q, adjVertex);
            }
            temp = temp->next;
       }
    }
}


struct node* createNode(int v)
{
    struct node* newNode = malloc(sizeof(struct node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

struct graph* createGraph(int vertices)
{
    struct graph* g = malloc(sizeof(struct graph));
    g->v_no = vertices;

    g->adjlist = malloc(vertices * sizeof(struct node*));
    g->visited = malloc(vertices * sizeof(int));


    int i;
    for (i = 0; i < vertices; i++)
    {
        g->adjlist[i] = NULL;
        g->visited[i] = 0;
    }

    return g;
}



void addEdge(struct graph* g, int src, int dest)
{
    struct node* newNode = createNode(dest);
    newNode->next = g->adjlist[src];
    g->adjlist[src] = newNode;

    newNode = createNode(src);
    newNode->next = g->adjlist[dest];
    g->adjlist[dest] = newNode;
}

struct queue* createQueue()
{
    struct queue* q = malloc(sizeof(struct queue));
    q->front = -1;
    q->rear = -1;
    return q;
}


int isEmpty(struct queue* q)
{
    if(q->rear == -1)
        return 1;
    else
        return 0;
}

void enqueue(struct queue* q, int value)
{
    if(q->rear == 49)
        printf("\nQueue is Full!!");

    else
    {
        if(q->front == -1)
            q->front = 0;
        q->rear++;
        q->items[q->rear] = value;
    }
}


int dequeue(struct queue* q)
{
    int item;
    if(isEmpty(q))
    {
        printf("Queue is empty");
        item = -1;
    }
    else
    {
        item = q->items[q->front];
        q->front++;
        if(q->front > q->rear)
        {
            q->front = q->rear = -1;
        }
    }
    return item;
}

