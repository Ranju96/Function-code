
//* series: 1+2+3+4+5+..........  * // 

#include<stdio.h>
int sum (int);
int main ()
{
	int n;  //* n=5//
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("sum of %d num= %d", n, sum(n));

	return 0;
}

int sum(int n)
{
	if(n==0)
		return 0;
	else
		return (n + sum(n-1));
}
