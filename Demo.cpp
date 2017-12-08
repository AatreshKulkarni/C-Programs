#include <stdio.h>
int sum(int, int);
int main()
{
	int r1=10,r2=20,ans;
	printf("%d  %d\n", r1,r2);
	ans = sum(r1,r2);
	printf("sum is = %d\n",ans);
	printf("%d  %d\n", r1,r2);
	return 0;
}
int sum(int r1, int r2){
	int r3;
	r3 = r1 + r2;
	r1=20; r2= 30;
	printf("%d  %d\n", r1,r2);
	return r1, r2, r3;
}