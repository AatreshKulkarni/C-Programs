#include <stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node * llink;
	struct node * rlink;
};
struct node *f;
void insert_front(){
	struct node *p;int elem;
	p = (struct node *)malloc(sizeof(struct node));
	printf("Enter the element\n");
	scanf("%d",&elem);
	p -> data = elem;
	p -> llink = NULL;
	p -> rlink = NULL;
	if(f == NULL){
		f = p;
	}
	else{
		p -> rlink = f;
		f -> llink = p;
		f = p;
	}
}
void insert_rear(){
	struct node *p,*temp;int elem;
	p = (struct node *)malloc(sizeof(struct node));
	printf("Enter the element\n");
	scanf("%d",&elem);
	p -> data = elem;
	p -> llink = NULL;
	p -> rlink = NULL;
	if(f == NULL){
		f = p;
	}
	else{
		temp = f;
		while(temp -> rlink != NULL){
			temp = temp -> rlink;
		}
		temp -> rlink = p;
		p -> llink = temp;
		
	}
}
void delete_front(){
	struct node *temp;
	if(f == NULL){
		printf("Deletion not Possible\n");
	}
	else if(f -> rlink == NULL){
		printf("Deleted element is %d\n",f -> data);
		free(f);
		f = NULL;
	}
	else{
		temp = f;
		printf("Deleted element is %d\n",f -> data);
		f = f -> rlink;
		free(temp);
	}
}
void delete_rear(){
struct node *temp;
	if(f == NULL){
		printf("Deletion not Possible\n");
	}
	else if(f -> rlink == NULL){
		printf("Deleted element is %d\n",f -> data);
		free(f);
		f = NULL;
	}
	else{
		temp = f;
		while (temp -> rlink -> rlink != NULL)
		{
			temp = temp -> rlink;
		}
		printf("Deleted element is %d\n",temp -> rlink -> data);
		free(temp -> rlink);
		temp -> rlink = NULL;
	}
	
}
void disp(){
	struct node *temp;
	if(f == NULL){
		printf("Display not possible\n");
	}
	else if(f -> rlink == NULL){
		printf("element in dll %s",f -> data);
	}
	else{
		temp = f;
		while(temp != NULL){
			printf("%d\t",temp -> data);
			temp = temp -> rlink;
			
		}
	}
}
int main()
{
	
	int choice;
	while(1){
		printf("\nEnter 1 to insert front\n");
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
