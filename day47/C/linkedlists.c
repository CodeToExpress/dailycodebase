// Name :Dipto Chakrabarty
// Date : 26/03/2019
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void insert(struct node **head, int n)
{
	struct node* ne;
	ne=(struct node*)malloc(sizeof(struct node));
	ne->data=n;
	ne->next=NULL;
	struct node* last;
	last=(struct node*)malloc(sizeof(struct node));
	if(*head==NULL)
	{
		*head=ne;
		return ;
	}
	else
	{
			
			last=*head;
	
	while(last->next!=NULL)
	{
		last=last->next;
	}
	last->next=ne;	
	}
	return ;
		
	
}
void show(struct node *head)
{
	struct node* ne;
	ne=(struct node*)malloc(sizeof(struct node));
	ne=head;
	printf("Elements are : ");
	while(ne!=NULL)
	{
		printf("%d\t",ne->data);
		ne=ne->next;
	}
	
}
int main()
{
	int n,i,t;
	struct node* head=NULL;
	printf("Give your range\n");
	scanf( "%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&t);
			insert(&head,t);		
	}
	show(head);
	
	
	
	return 0;
}
