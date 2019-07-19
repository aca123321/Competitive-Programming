#include<stdio.h>

#include<stdlib.h>

#define MAX 100

int no;

struct vertex_node{

	int parent;

	struct edge_node *link;

};

struct edge_node{

	int wt, vertex_no;

	struct edge_node *link;

};

struct priority{

	int key,vertex_no;

};

struct node{

	int info;

	struct node *link;

};

struct vertex_node insert(struct vertex_node start,int i,int j)

{

	struct edge_node *temp,*p;

	temp=(struct edge_node*)malloc(sizeof(struct edge_node));

	temp->vertex_no=j;

	printf("enter the weight of the edge\n");

	int data;

	scanf("%d",&data);

	temp->wt=data;

	temp->link=NULL;

	if(start.link==NULL)

	{

		start.link=temp;

		return start;

	}

	else

	{

		p=start.link;

		start.link=p;

		while(p->link!=NULL)

		{

			p=p->link;

		}

		p->link=temp;

		return start;

	}

}

void create_graph(struct vertex_node arr[],int n)

{

	int i,j,choice;

	for(i=1;i<=n;i++)

	{

		for(j=1;j<=n;j++)

		{

			if(i!=j)

			{

				printf("is there an edge between %d and %d (if yes enter 1, else 0)\n",i,j);

				scanf("%d",&choice);

				if(choice==1)

				{

					arr[i]=insert(arr[i],i,j);

				}

			}

		}

	}

}

struct node *add(struct node *ans,int u)

{

	struct node *temp,*p;

	temp=(struct node*)malloc(sizeof(struct node));

	temp->info=u;

	temp->link=NULL;

	if(ans==NULL)

	{

		ans=temp;

		return ans;

	}

	else

	{

		p=ans;

		ans=p;

		while(p->link!=NULL)

		{

			p=p->link;

		}

		p->link=temp;

		return ans;

	}

}

void Min_Heapify(struct priority PQ[],int index)

{

	int lowindex=index;

	if(2*index<=no && PQ[2*index].key<PQ[index].key)

	{

		lowindex=2*index;

	}

	if((2*index)+1<=no && PQ[(2*index)+1].key < PQ[lowindex].key)

	{

		lowindex=(2*index)+1;

	}

	if(lowindex!=index)

	{

		struct priority temp;

		temp.vertex_no=PQ[index].vertex_no;

		temp.key=PQ[index].key;

		PQ[index].vertex_no=PQ[lowindex].vertex_no;

		PQ[index].key=PQ[lowindex].key;

		PQ[lowindex].vertex_no=temp.vertex_no;

		PQ[lowindex].key=temp.key;

		Min_Heapify(PQ,lowindex);

	}

}

void Build_Min_Heap(struct priority PQ[])

{

	for(int i=no/2;i>0;i--)

	{

		Min_Heapify(PQ,i);

	}

}

int EXTRACT_MIN(struct priority PQ[])

{

	struct priority u,temp;

	u.vertex_no=PQ[1].vertex_no;

	temp.vertex_no=PQ[1].vertex_no;

	temp.key=PQ[1].key;

	PQ[1].vertex_no=PQ[no].vertex_no;

	PQ[1].key=PQ[no].key;

	PQ[no].vertex_no=temp.vertex_no;

	PQ[no].key=temp.key;

	no--;

	Min_Heapify(PQ,1);

	return u.vertex_no;

}

void decrease_key(struct priority PQ[],struct edge_node *v)

{

	int i=0;

	while(PQ[i].vertex_no!=v->vertex_no)

	{

		i++;

	}

	PQ[i].key=v->wt;

	while(PQ[i/2].key>PQ[i].key && i>1)

	{

		struct priority temp;

		temp.vertex_no=PQ[i].vertex_no;

		temp.key=PQ[i].key;

		PQ[i].vertex_no=PQ[i/2].vertex_no;

		PQ[i].key=PQ[i/2].key;

		PQ[i/2].vertex_no=temp.vertex_no;

		PQ[i/2].key=temp.key;

		i=i/2;

	}

}

struct node *MST_Prim(struct vertex_node arr[],int r,int n)

{

	struct priority PQ[MAX];

	int key[MAX];

	int i;

	for(i=1;i<=n;i++)

	{

		key[i]=1000;

		PQ[i].vertex_no=i;

		PQ[i].key=1000;

		arr[i].parent=NULL;

	}

	struct node *ans=NULL;

	int u;

	PQ[r].key=0;

	Build_Min_Heap(PQ);

	while(no!=0)

	{

		u=EXTRACT_MIN(PQ);

		ans=add(ans,u);

		struct edge_node *check;

		check=arr[u].link;

		while(check!=NULL)

		{

			int get;

			get=0;

			struct node *find=ans;

			while(find!=NULL)

			{

				if(find->info==check->vertex_no)

				{

					get=1;

				}

				find=find->link;

			}

			if(get==0)

			{

				if(check->wt<key[check->vertex_no])

				{

					decrease_key(PQ,check);

					arr[check->vertex_no].parent=u;

					key[check->vertex_no]=check->wt;

				}

			}

			check=check->link;

		}

	}

	return ans;

}

void display(struct node *ans)

{

	struct node *p;

	p=ans;

	while(p!=NULL)

	{

		printf("%d",p->info);

		p=p->link;

	}

}

main()

{

	printf("input n\n");

	int n,r;

	scanf("%d",&n);

	no=n;

	struct vertex_node arr[MAX];

	for(int i=1;i<=n;i++)

	{

		arr[i].link=NULL;

	}

	create_graph(arr,n);

	printf("input the root node\n");

	scanf("%d",&r);

	struct node *ans;

	ans=MST_Prim(arr,r,n);

	display(ans);



}
