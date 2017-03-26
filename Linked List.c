#include<stdio.h>
#include<stdlib.h>

struct node{
	int n;
	struct node *next;
}*stt=NULL,*curr,*newn,*temp,*temp2;

int c=0,x,t;

void ins();
void del();
void disp();
int size();

int main()
{
	int ch;
	char op;
	printf("     -----LINKED LIST-----\n\n");
	do{
		printf("1. INSERT\n2. DELETE\n3. DISPLAY\n4. SIZE\n5. EXIT\n\nEnter your choice... ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:ins();break;
			case 2:del();break;
			case 3:disp();break;
			case 4:printf("Size of the List is %d\n",c);break;
			default:exit(0);
		}
		printf("\nContinue?? (Y or N) ");
		scanf("%c",&op);
	}while((op!='n')&&(op!='N'));
}

void ins()
{
	printf("\n1. Beginning\n2. End\n3. Specific Location\nEnter your choice... ");
	scanf("%d",&x);
	switch(x)
	{
		case 1:{
		if(stt==NULL)
		         {
		         	newn=(struct node*)malloc(sizeof(struct node *));
		         	printf("Enter data ");
		         	scanf("%d",&newn->n);
		         	stt=newn;
		         	curr=newn;
		         	newn->next=NULL;
		         	c++;
				 }
			   else{
			   	    newn=(struct node*)malloc(sizeof(struct node *));
		         	printf("Enter data ");
		         	scanf("%d",&newn->n);
		         	newn->next=stt;
		         	stt=newn;
		         	c++;
			   }}
			   break;
		case 2:{
		if(stt==NULL)
		         {
		         	newn=(struct node*)malloc(sizeof(struct node *));
		         	printf("Enter data ");
		         	scanf("%d",&newn->n);
		         	stt=newn;
		         	curr=newn;
		         	newn->next=NULL;
		         	c++;
				 }
			   else{
			   	    newn=(struct node*)malloc(sizeof(struct node *));
		         	printf("Enter data ");
		         	scanf("%d",&newn->n);
		         	curr->next=newn;
		         	curr=newn;
		         	curr->next=NULL;
		         	c++;
			   }}break;
		case 3:{
			   printf("Enter a location");
		       scanf("%d",&t);
		       if(t<=0)
		       printf("No such location\n");
		       if(t==1)
		       printf("Use 'Insert at Beginning' instead");
		       if(t>c)
		       printf("Use 'Insert at End' instead");
		       else{
		       	x=1;
		       	temp=stt;
		       	do{
		       		temp=temp->next;
		       		x++;
		       		if(temp==NULL){
		       			printf("No such Location\n");
		       			break;
					   }
				   }while(x==t);
				temp2=temp;
				newn=(struct node*)malloc(sizeof(struct node *));
		        printf("Enter data ");
		        scanf("%d",&newn->n);
		        temp=newn;
				temp->next=temp2; 	
			   }}break;
			default:printf("Wrong Entry!!!\n");
	}
}

void del(){
	printf("Empty\n");
}

void disp(){
	temp=stt;
	do{
		printf("\n%d",temp->n);
		temp=temp->next;
	}while(temp->next!=NULL);
}
