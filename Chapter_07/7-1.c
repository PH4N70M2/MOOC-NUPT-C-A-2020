#include<stdio.h>

void out(int a[], int n){
	int i;
	for(i=0;i<n;i++)
		printf("%3d",a[i]);
	printf("\n");
}

void r1mov(int a[], int n){
	int t=a[n-1];
	int i=0;
	for(i=n-1;i;i--)
		a[i]=a[i-1];
	a[0]=t;
}

int main(){
	int n=10;
	int a[10]={1,2,3,4,5,6,7,8,9,10};

	int m,i;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		r1mov(a,n);
	}

	out(a,n);
}
