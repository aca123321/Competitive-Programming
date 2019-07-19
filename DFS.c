#include <stdio.h>

struct node
{
    int vertex;
    struct node* next;
};

struct node* createNode(int v);

struct Graph
{
    int numVertices;
    int* visited;
    struct node** adjLists;
};

struct Graph* createGraph(int);
void addEdge(struct Graph*, int, int);
void printGraph(struct Graph*);
void DFS(struct Graph*, int);


int main()
{
    int n,i,j,a;

    printf("Enter the number of vertices in the graph\n");
    scanf("%d",&n);

    struct Graph* graph = createGraph(n);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            printf("Enter 1 if an edge exists between vertex %d and vertex %d. Press 0 otherwise\n",i+1,j+1);
            scanf("%d",&a);

            if(a == 1)
            {
                addEdge(graph,i,j);
            }
        }
    }

    DFS(graph, 2);

    return 0;
}

void DFS(struct Graph* graph, int vertex) {
        struct node* adjList = graph->adjLists[vertex];
        struct node* temp = adjList;

        graph->visited[vertex] = 1;
        printf("Visited %d \n", vertex);

        while(temp!=NULL) {
            int connectedVertex = temp->vertex;

            if(graph->visited[connectedVertex] == 0) {
                DFS(graph, connectedVertex);
            }
            temp = temp->next;
        }
}


struct node* createNode(int v)
{
    struct node* newNode = malloc(sizeof(struct node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

struct Graph* createGraph(int vertices)
{
    struct Graph* graph = malloc(sizeof(struct Graph));
    graph->numVertices = vertices;

    graph->adjLists = malloc(vertices * sizeof(struct node*));

    graph->visited = malloc(vertices * sizeof(int));

    int i;
    for (i = 0; i < vertices; i++) {
        graph->adjLists[i] = NULL;
        graph->visited[i] = 0;
    }
    return graph;
}

void addEdge(struct Graph* graph, int src, int dest)
{
    struct node* newNode = createNode(dest);
    newNode->next = graph->adjLists[src];
    graph->adjLists[src] = newNode;

    newNode = createNode(src);
    newNode->next = graph->adjLists[dest];
    graph->adjLists[dest] = newNode;
}

void printGraph(struct Graph* graph)
{
    int v;
    for (v = 0; v < graph->numVertices; v++)
    {
        struct node* temp = graph->adjLists[v];
        printf("\n Adjacency list of vertex %d\n ", v);
        while (temp)
        {
            printf("%d -> ", temp->vertex);
            temp = temp->next;
        }
        printf("\n");
    }
}
