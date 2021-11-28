#include <stdlib.h>
#include <stdio.h>

struct Node
{
	int data;
	Node* next;
};

int main()
{
	Node* head;
	int val;
	printf("Untuk A : \n");
	printf("Input Value x^0 : ");
	scanf("%d",&val);
	
	head = (Node*)malloc(sizeof(Node));
	head->data = val;
	head->next = NULL;
	
	Node* tmp1 = (Node*)malloc(sizeof(Node));
	tmp1 = head;
	for(int x=1;x<5;x++)
	{
		printf("Input Value x^%d : ",x);
		scanf("%d",&val);
		Node* tmp = (Node*)malloc(sizeof(Node));
		tmp->data = val;
		tmp->next = NULL;
//		printf("\n%d",tmp1->data);
		tmp1->next = tmp;
		tmp1 = tmp;
	}
	printf("\n");
	printf("Untuk B : \n");
	Node* h_1;
	printf("Input Value x^0 : ");
	scanf("%d",&val);
	
	h_1 = (Node*)malloc(sizeof(Node));
	h_1->data = val;
	h_1->next = NULL;
	
	Node* tmp2 = (Node*)malloc(sizeof(Node));
	tmp2 = h_1;
	for(int x=1;x<5;x++)
	{
		printf("Input Value x^%d : ",x);
		scanf("%d",&val);
		Node* tmp = (Node*)malloc(sizeof(Node));
		tmp->data = val;
		tmp->next = NULL;
		tmp2->next = tmp;
		tmp2 = tmp;
	}
	
	Node* n = head;
	Node* nn = h_1;
	int p = 0;
	printf("\n");
	do
	{
		printf("%ix^%d",n->data + nn->data,p);
		n = n->next;
		p++;
		if (p<5)
		{
			printf(" + ");
		}
		nn = nn->next;
	}
	while(n != NULL);
}
