#include<stdio.h>
#include<math.h>

const double pi=3.14d;

double area(double r, double h){
	return pi*r*r + pi*r*sqrt(r*r+h*h);
}

double volume(double r, double h){
	return pi*r*r*h/3;
}

int main(){
	double r,h;
	scanf("%lf%lf",&r,&h);
	double a=area(r,h);
	double v=volume(r,h);
	printf("radius=%lf, height=%lf, Area of surface=%lf, Volume=%lf\n",r,h,a,v);
	return 0;
}
