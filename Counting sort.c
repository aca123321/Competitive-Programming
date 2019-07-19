#include <stdio.h>

void countSort(int* , int );

int main()
{
    int n,*arr,i;

    printf("Enter the number of elements you want to sort\n");
    scanf("%d",&n);

    arr = (int*)malloc(sizeof(int));

    printf("Enter the elements to be sorted\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",(arr + i));
    }

    countSort(arr,n);

    printf("Sorted array is \n");

    for(i=0;i<n;i++)
    {
        printf("%d ",*(arr + i));
    }
}

void countSort(int* arr, int n)
{
    int count[100 + 1], i, output[n];

    printf("afasf1");

    for(i = 0; i<n; ++i)
    {
        count[*(arr + i)] = count[*(arr + i)] + 1;
    }

    printf("afasf2");

    for (i = 1; i <= 100; ++i)
    {
        count[i] += count[i-1];
    }

    printf("afasf3");

    for (i = 0; i<n; ++i)
    {
        output[count[*(arr + i)]] = *(arr + i);
        count[*(arr + i)] = count[*(arr + i)] - 1;
    }

    printf("afasf4");

    for (i = 0; i<n ; ++i)
    {
        *(arr + i) = output[i];
    }

    printf("afasf5");
}
