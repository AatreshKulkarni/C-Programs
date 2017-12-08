#include <stdio.h>
#include<stdlib.h>

struct  node 
{
	int data;
	struct node *link;
};
struct node *f;
void insert_front(){
	int elem;
	struct node *p;
	p = (struct node *)malloc(sizeof(struct node));
	printf("Enter element is ");
	scanf("%d",&elem);
	p -> link =	NULL;
	p -> data = elem;
	if(f == NULL){
	f = p;
	
	}
	else{
		p -> link = f;
		f = p;
	}
}
void insert_rear(){
	int elem;
	struct node *p,*temp;
	p = (struct node *)malloc(sizeof(struct node));
	printf("Enter the element ");
	scanf("%d",&elem);
	p -> data = elem;
	p -> link = NULL;
	if(f == NULL){
		f = p;
	}
	else{
		temp = f;
		while(temp -> link != NULL){
			temp = temp -> link;
		}
		temp -> link = p;
	}
}
void delete_front(){
	struct node *temp;
	if(f == NULL ){
		printf("Deletion not possible\n");
	}
	else if(f -> link == NULL){
		printf("Deleted element is %d\n",f -> data);
		free(f);
		f = NULL;
	}
	else{
		printf("Deleted element is %d\n",f -> data);
		temp = f; 
		f = f -> link;
		free(temp);
	}
}
void delete_rear(){
	struct node *temp;
	if(f == NULL ){
		printf("Deletion not possible\n");
	}
	else if(f -> link == NULL){
		printf("Deleted element is %d\n",f -> data);
		free(f);
		f = NULL;
	}
	else{
		temp = f;
		while(temp -> link -> link != NULL){
			temp = temp -> link;
		}
		printf("Deleted Element is %d\n",temp -> link -> data);
		free(temp -> link);
		temp -> link = NULL;
	}
}
void disp(){
	struct node *temp;
	if(f == NULL){
		printf("Display not possible\n");
	}
	else if(f -> link == NULL){
		printf("Linked list  element is %d\n",f -> data);
	
	}
	else{
		temp = f;
		while(temp != NULL){
			printf("%d \t",temp -> data);
			temp = temp -> link;
		}
	}
}
	
		

int main()
{
	int choice;
	while(1){
		printf("Enter 1 to insert front\n");
		printf("Enter 2 to insert rear\n");
		printf("Enter 3 to delete front\n");
		printf("Enter 4 to delete rear\n");
		printf("Enter 5 to display\n");
		printf("Enter 6 to stop\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice){
			case 1: insert_front();
					break;
			case 2: insert_rear();
					break;
			case 3: delete_front();
					break;
			case 4: delete_rear();
					break;
			case 5: disp();
					break;
			default: exit(0);
					break;
		}
	}
}


