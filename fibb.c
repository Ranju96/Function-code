#include<stdio.h>
int fib(int n);
int main(void)
{
	int n, i;
	printf("Enter the number: ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)

	printf("%d\n",fib(i));
	
	return 0;
}
int fib(int n)
{
	if(n==0 || n==1)
	return 1;
	else
	return(fib(n-1) + fib(n-2));
}


