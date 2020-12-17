#include<stdio.h>

int main(){
	int n=10;
	int a[10];
	int i;

	int pmax=0;
	int pmin=0;
	double avg=0;

	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		pmax=(a[i]>a[pmax])?i:pmax;
		pmin=(a[i]<a[pmin])?i:pmin;
	}

	int t=0;
	for(i=0;i<n;i++){
		if(a[i]>a[pmin] && a[i]<a[pmax]){
			avg+=a[i]*1.0;
			t++;
		}
	}
	
	avg/=t*1.0;
	
	printf("%lf\n",avg);

}
