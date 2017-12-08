#include <stdio.h>

void insertion_sort(int a[],int n){
	int i,j,item;
	for(i=1;i<n;i++){
		item = a[i];
		j = i-1;
		while(j>0 && a[j]>item){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = item;
	}
}
 main(){
	int i,n;
	printf("Enter the number of elements in an array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements in an array\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Before sorting\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	insertion_sort(a,n);
	printf("\nAfter sorting\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}

}
