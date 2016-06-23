#include<stdio.h>
#include<Math.h>


int main() {
	int n,a[50];
	double pi=3.14159265359,c0,aa=0,b[50],bb=0,x,f,l=1.5;
	FILE *fo;

	fo=fopen("./fourier.dat","w");
	c0=0.0;

	for(x=-2*pi;x<=2*pi;x+=pi/100){
		for(n=1;n<=50;n++){
			a[n]=0.00000;
			b[n]=sin(l*pi - n*pi)/(l-n) - sin(l*pi + n*pi)/(l+n);
			if(a[n]==0){
				aa+=0.00000;
			}else{
				aa+=a[n]*cos(n*x);
			}
			if(b[n]==0){
				bb+=0.00000;
			}else{
				bb+=b[n]*sin(n*x) / (pi);
			}
		}
		f=c0+aa+bb;
		fprintf(fo,"%4.3f %4.3f\n",x,f);
		printf("%4.3f,%4.3f,%4.3f,%4.3f,%4.3f\n",c0,aa,bb,x,f);
		aa=bb=0;
	}
	return 0;
}