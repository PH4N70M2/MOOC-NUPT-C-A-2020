#include<stdio.h>

int SumDiff(int x,int y, int *d){
	*d=x-y;
	return x+y;
}

int main()
{
	int a,b,sum,dif;
	scanf("%d%d",&a,&b);
	sum=SumDiff(a,b,&dif);
	printf("sum=%d, difference=%d\n",sum,dif);
	return 0;
}