#include <stdio.h>

struct node {
	int data;
	struct node *link;
	
};
struct node *f = NULL;
void push()
{
	struct node *p;
	int elem;
	p = (struct node*) malloc(struct node);
	printf("Enter the element\n");
	scanf("%d",&elem);
	p->data = elem;
	p->link = NULL;
	if(f == NULL){
		f= p;
	}
	else{
    temp = f;
	while(tem -> link != NULL){
		temp = temp -> link;
	}
	temp -> link = p;
	}
}
void pop(){
	struct node *temp;
	if(f == NULL){
		printf("Pop not possible\n");
	}
	else if(f -> link == NULL){
		printf("Poped element is %d\n",f->data);
		free(f);
		f = NULL;
	}
	else{
		temp = f;
		f = f->link;
		free(temp);
	}
}
int main(int argc, char *argv[])
{
	
	return 0;
}
