#include<stdio.h>
#include<limits.h>

void solveprim(int** mat, int n)
{
    int i,j,visited[n],parent[n],weight[n],min;

    for(i=0;i<n;i++)
    {
        visited[i] = 0;
        weight[i] = INT_MAX;
    }

    parent[0] = -1;
    weight[0] = 0;

    for(i=0;i<n;i++)
    {
        min = findminvertex(visited, weight, n);

        visited[min] = 1;

        for(j=0;j<n;j++)
        {
            if(mat[min][j] != INT_MAX && j != min && mat[min][j] < weight[j])
            {
                weight[j] = mat[min][j];
                parent[j] = min;
            }
        }
    }

    printf("Starting with vertex 1\n");

    for(i=1;i<n;i++)
    {
        printf("vertex %d connected to vertex %d through %d weighted edge\n",i+1,parent[i]+1,weight[i]);
    }

}

int findminvertex(int visited[], int weight[], int n)
{
    int min = INT_MAX, mined,i;

    for(i=0;i<n;i++)
    {
        if(visited[i] == 0)
        {
            if(weight[i] < min)
            {
                min = weight[i];
                mined = i;
            }
        }
    }

    return mined;
}

main()
{
    int **mat,i,n,j,wt;

    printf("Enter the number of vertices in the graph\n");
    scanf("%d",&n);

    mat = (int**)malloc(n*sizeof(int*));

    for(i=0;i<n;i++)
    {
        *(mat + i) = (int*)malloc(n*sizeof(int));
    }

    printf("\nFor the following pair of vertices:\nEnter the weight of the edge or\nEnter -1 if there exists no vertex between the pair\n\n");

    for(i=0;i<n;i++) // initialising the adj matrix
    {
        for(j=0;j<n;j++)
        {
            *(*(mat+i)+j) = INT_MAX;
        }
    }


    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            printf("vertex %d and vertex %d\n",i+1,j+1);
            scanf("%d",&wt);

            if(wt == -1)
            {
                *(*(mat+i)+j) = INT_MAX;
            }

            else
            {
                *(*(mat+i)+j) = wt;
            }
        }
    }

    solveprim(mat,n);
}
