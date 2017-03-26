#include<stdio.h>
#include<conio.h>


typedef struct node 
{
	int data;
	struct node *next;
}node;
void main()
{
	node *HEAD,*P;
	int n,x,i;
	printf("\nNo. Of Items : ");
	scanf("%d",&n);
	HEAD=(node*)malloc(sizeof(node));
	scanf("%d",&(HEAD->data));
	HEAD->next=NULL;
	P=HEAD;
	for(i=1;i<n;i++)
	{
		P->next=(node*)malloc(sizeof(node));
		P=P->next;
		P->next=NULL;
		scanf("%d",&(P->data));
		printf("%d",(P->next));
	}
}
