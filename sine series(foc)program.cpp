#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,x,n,fact,sign=1;
	float sum=0.0;
	printf("enter the value of N");
	scanf("%d",&n);
	printf("enter the value of X");
	scanf("%d",&x);
	for(i=1;i<=n;i+=2){
		fact=1;
		for(j=1;j<=i;j++);
		{
			fact=fact*j;
		}
		sum=sum+=(pow(x,i)/fact)*sign;
		sign=-sign;	
	}
	printf("%2f",sum);
	 return 0;
}
