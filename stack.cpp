#include <stdio.h>
#include<stdlib.h>
int top = -1,max_size = 5;
int a[5];
void push(){
	int item;
	
	if(top == max_size-1){
	printf("Insertion not possible\n");
	}
	else{
		printf("Enter the element to be inserted\n");
		scanf("%d",&item);
		++top;
		a[top] = item;
	}
}

void pop(){

	if(top == -1){
		printf("Deletion not possible\n");
	}
	else{
		printf("Deleted element is %d\n",a[top]);
		--top;;
	}
}

void display(){
	if(top == -1){
		printf("Display not possible\n");
	}
	else{
		printf("Stack elements are\n");
		for(int i = top;i>=0;i--){
			printf("%d\n",a[i]);
		}
	}
}

int main()
{
int choice;
	while(1){
		printf("Enter 1 to push\n");
		printf("Enter 2 to pop\n");
		printf("Enter 3 to display\n");
		printf("Enter 4 to stop\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice){
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			default: exit(0);
					break;
		}
	}
}
