#include <stdio.h>
#include <stdlib.h>

struct tnode {
	int value;
	struct tnode *next, *sum;
}next;
	
	typedef struct tnode node;
	
	void print_list(node *head)
	{
		node *temp = head;
		while(temp != NULL)
		{
			printf("%d",temp -> value);
			temp = temp -> next;
			printf(" + ");
		}
	}
	
	void sum_list(node *head)
	{
		node *temp = head;
		node *sum = head->value;
		while(temp->next != NULL)
		{
			sum=sum+temp->next->value;
			printf("%d",temp -> value);
			temp=temp->next;
			printf(" + ");
		}
	}
	
node *create_new_node(int value, struct tnode **temp){
	node *result=(node *)malloc(sizeof(node));
	result->value=value;
	result->next=NULL;
	return result;
	}	
	
int main()
{	
	int i,x,r,y;
	node *head,*tmp1,*tmp2,*poly1,*poly2,*poly;

	printf("Untuk A : \n");
	printf("Masukkan nilai x^1 : ",i);scanf("%d",&x);
	tmp1 = create_new_node(x,&poly1);
	head = tmp1;
	
	for(i=2;i<5;i++)
	{
		printf("Masukkan nilai x^%d  : ",i);scanf("%d",&x);
		tmp1 = create_new_node(x,&poly1);
		tmp1->next=head;
		head = tmp1;
	}
	
	printf("Masukkan nilai konstanta : ",i);scanf("%d",&x);
	tmp1 = create_new_node(x,&poly1);
	
	
	printf("\n\n");
	print_list(head);
	printf("%d\n\n",x);
	
	
		printf("Untuk B : \n");
	printf("Masukkan nilai x^1 : ",i);scanf("%d",&y);
	tmp2 = create_new_node(y,&poly2);
	head = tmp2;
	
	for(i=2;i<5;i++)
	{
		printf("Masukkan nilai x^%d  : ",i);scanf("%d",&y);
		tmp2 = create_new_node(y,&poly2);
		tmp2->next=head;
		head = tmp2;
	}
	
	printf("Masukkan nilai konstanta : ",i);scanf("%d",&y);
	tmp2 = create_new_node(y,&poly2);
	
	
	printf("\n\n");
	print_list(head);
	printf("%d\n\n",y);
	sum_list(head);


	return 0;
	
}
