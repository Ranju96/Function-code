#include<stdio.h>
 void fib(int n)
{
	int a=0, c;
        int b=1;
        printf("%d\n%d\n",a,b);

        for(int i=2; i<n; i++)
        {
           c=a+b;
           printf("%d\n",c);
           a=b;
           b=c;

        }
}
int main()
{
	int n, a, b;
	printf("Enter the number :");
	scanf("%d",&n);
	fib(n);
	return 0;
}


