#include<stdio.h>
#include<Math.h>


int main() {
	int x;
	double pi=3.14159265359,keta,f,Q,X,h,i,j;
	FILE *fo;

	fo=fopen("./frequency6.dat","w");
	keta=0.1;
	Q=10.0;
	X=0;

	printf("%4.2f\n",Q);
	
	for(x=1;X<=1000;x++){
		if(x==10){
			x=1;
			keta*=10;
		}
		X=keta * x;
		
		h=1 - X*X;
		i=X / Q;
		j=h*h + i*i;
		f=1/sqrt(j);
		
		fprintf(fo,"%10.3f %10.3f\n",X,f);
		printf("%10.3f,%10.3f,%10.3f,%10.3f,%10.3f\n",X,h,i,j,f);

	}
	return 0;
}