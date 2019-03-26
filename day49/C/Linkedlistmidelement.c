#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
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
	//ne=(struct node*)malloc(sizeof(struct node));
	ne=head;
	printf("Linked list is ");
	while(ne!=NULL)
	{
		printf("%d\t",ne->data);
		ne=ne->next;
	}
	
}
void mid(struct node **head)
{
	struct node* fast;
	fast=(struct node*)malloc(sizeof(struct node));
	struct node* slow;
	slow=(struct node*)malloc(sizeof(struct node));
	fast=*head;
	slow=*head;
	while(fast!=NULL && fast->next!=NULL)
	{
		//	printf("%d-",fast->data);
			fast=fast->next->next;
			slow=slow->next;
		
		//printf("%d*",slow->data);
	}
	printf("Mid element is : %d ",slow->data);
	
	
	
}
int main()
{
	int i,t,n,p;
	struct node* head = NULL;
	//head=(struct node*)malloc(sizeof(struct node));
	printf("Give no of elements ");
	scanf("%d",&n);
	printf("Give the elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&t);
			insert(&head,t);		
	}
	
	show(head);
	printf("\n");
	mid(&head);

	
	
	
	return 0;
}
