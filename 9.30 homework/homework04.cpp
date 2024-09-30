//train of \t
#include<stdio.h>
int main(void){
	double a=23456;
	int i;
	for(i=0;i<100;i++){
		a=a/3;
		printf("No.%d=%.5f\t",i,a);
		if(i%3==0){
			printf("\n");
		}
	}
}