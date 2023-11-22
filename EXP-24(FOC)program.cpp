#include<stdio.h>
void swap(int *a,int *b,int *c)
{
	int temp=*a;
	*a=*c;
	*c=*b;
	*b=temp;
}
int main()
{
	int a,b,c;
	printf("enter value for a:");
	scanf("%d",&a);
	printf("enter value for b:");
	scanf("%d",&b);
	printf("enter value for c:");
	scanf("%d",&c);
	printf("\noriginal values;a=%d,b=%d,c=%d\n",a,b,c);
	swap(&a,&b,&c);
	printf("\nswapped values:a=%d,b=%d,c=%d\n",a,b,c);
	return 0;
}
