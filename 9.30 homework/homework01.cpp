#include<stdio.h>\\40089264
#include<math.h>
int main(){
	int a,b,c;
	printf("a:");
	scanf("%d",&a);
	printf("b:");
	scanf("%d",&b);
	printf("c:");
	scanf("%d",&c);
	double p=b*b-4*a*c;
	double answer1=(-b+sqrt(p))/(2*a);
	double answer2=(-b-sqrt(p))/(2*a);
	if(p<0){
		printf("none.");
	}else if(p==0){
		printf("only one result:");
		printf("%.5f",answer1);
	}else if(p>0){
		printf("two result:");
		printf("answer1:%.5f  answer2=%.5f",answer1,answer2);

	}
}