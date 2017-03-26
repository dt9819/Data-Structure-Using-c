#include<stdio.h>
#include<conio.h>
typedef struct node{
	int data;
	struct node *next;
}node;
node *HEAD=NULL,*head,*temp;
node *create_node(int);
void print(node *);
void traverse(node *);
void main()
{
	int n;
	printf("\n Enter No. Of Items :");
	scanf("%d",&n);
	HEAD=create_node(n);
	print(HEAD);
	traverse(HEAD);
getch();
}
node *create_node(int n)
{
	int i;
	head=(node*)malloc(sizeof(node));
	head->next=NULL;
	printf("\nEnter The Data Of Node [1] : ");
	scanf("%d",&(head->data));
	temp=head;
	for(i=1;i<n;i++)
	{
		temp->next=(node*)malloc(sizeof(node));
		temp=temp->next;
		printf("\nEnter The Data Of Node [%d] : ",i+1);
	    scanf("%d",&(temp->data));
	    temp->next=NULL;
	}
	printf("\n");
return(head);	
}
void print(node *temp)
{
	while(temp!=NULL)
	{
		printf("%d[%u] ",(temp->data),(temp->next));
		temp=temp->next;
	}
}
void traverse(node *temp)
{
	int i=0;
	while(temp!=NULL)
	{
		i++;
		temp=temp->next;
	}
	printf("\n\nTotal No. Of Nodes : %d ",i);
}
void insertion()
