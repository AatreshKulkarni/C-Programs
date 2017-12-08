#include <stdio.h>
#include<stdlib.h>
void selectionsort(int a[10],int n){
int iMin,i,j,temp=0;
for(i=0;i<n-1;i++){
	iMin = i;
	for(j=i+1;j<n;j++){
		if(a[j]<a[iMin]){
			iMin = j;
	}}
	temp=a[i];
	a[i]=a[iMin];
	a[iMin]=temp;
}

}

 main()
{
	int a[] = {2,7,4,1,5,3};
	int n ;
	n = sizeof(a)/sizeof(a[0]);
	printf("%d\n",n);
	selectionsort(a,n);
	
for(int i=0;i<n;i++){
printf("%d\t",a[i]);
}
	

}
