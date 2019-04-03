#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
float mul(int a,int b);
int div(int a,int b);
int main()
{
	int i,j;
	printf("Enter two numbers:\n");
	scanf("%d%d",&i,&j);
	printf("addition is: %d\n",add(i,j));
	printf("substration is: %d\n",sub(i,j));
	printf("multiplecation is: %.2f\n",mul(i,j));
	printf("division is: %d\n",div(i,j));
return 0;
}
