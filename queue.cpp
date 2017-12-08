#include <stdio.h>
#include<stdlib.h>
int max_size=5,a[5],first=0,rear=-1;
void insert(){
	int item;
	if(rear == max_size-1){
	printf("Insertion not possible\n");
	}
	else{
		printf("Enter the element to be inserted\n");
		scanf("%d",&item);
		++rear;
		a[rear] = item;
	}
}
void delet(){
    if(rear == -1 || first>rear){
		printf("Deletion not possible\n");
	}
	else{
		printf("Deleted element is %d\n",a[first]);
		++first;
	}
}

void display(){
	if(rear == -1 || first>rear){
		printf("Display not possible\n");
	}
	else{
		printf("Queue elements are\n");
		for(int i = first;i<=rear;i++){
			printf("%d\t",a[i]);
		}
	}
}



int main()
{
	int choice;
	while(1){
		printf("Enter 1 to insert\n");
		printf("Enter 2 to delete\n");
		printf("Enter 3 to display\n");
		printf("Enter 4 to stop\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice){
			case 1: insert();
					break;
			case 2: delet();
					break;
			case 3: display();
					break;
			default: exit(0);
					break;
		}
	}
	
	
}
