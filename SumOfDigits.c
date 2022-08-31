#include<stdio.h>
 int sumofdigits(int n)
{
	int i, sum=0, r;
	while(n!=0)
	{
		r=n%10;
		sum = sum + r;
		n=n/10;	
	}
	return sum;
}
int main()
{
	int n =15632;
	printf("%d\n",sumofdigits(n));
	return 0;
}

