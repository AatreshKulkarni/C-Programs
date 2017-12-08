#include <stdio.h>

void bubblesort(int a[],int n){
	int i,k,temp=0,flag;
	for(k=0;k<n-1;k++){
		flag=0;
		for(i=0;i<n-k-1;i++){
			if(a[i]>a[i+1]){
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
				flag=1;
			}
		}
				if(flag == 0)
					break;
	}
}

main()
{
	int a[] = {2,7,4,1,5,3};
	int n ;
	n = sizeof(a)/sizeof(a[0]);
	printf("%d\n",n);
	bubblesort(a,n);
	
for(int i=0;i<n;i++){
printf("%d\t",a[i]);
}
}
