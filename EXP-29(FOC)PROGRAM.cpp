#include<stdio.h>
#include<math.h>
int main(){
	int i,x,j,fact,n;
	float sum=0.0;
	printf("enter the number:");
	scanf("%d",&n);
	printf("enter the value of x:");
    scanf("%d",&x);
    for(i=j;i<i<=n;i++){
    	fact=1;
    	for(j=1;j<=i;j++){
    		fact=fact*j;
		}
		 sum+=pow(x,i)/fact;
	}
	printf("\n%2f",sum+1);
	return 0;
}
