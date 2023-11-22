#include<stdio.h>
#include<conio.h>
int main(){
	int i,n;
	float x,sum=1,t=1;
	printf("enter the values of x:");
	scanf("%f",&x);
	printf("enter the values of N:");
	scanf("%f",&n);
	x=x*3.14159/180;
	for(i=1;i<=n;i++){
		t=t*(-1)*x*x/(2*i*(2*i-1));
		sum=sum+t;	
	}
	 printf("the value of cos(%f)is:%4f",x,sum);
	 getch();
}
