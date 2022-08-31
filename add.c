#include<stdio.h>
int sum(int x,int y);
int main (void)  /*function declaration*/
{
	int a=10, b=20, k;
	k=sum(a,b);
	printf("%d\n",k);
	k=sum(4,5);
	printf("%d\n",k); /*function call*/
	k=sum(a+b,b*2);
	printf("%d\n",k);
	return 0;

}
int sum(int x, int y)  /*function definition*/
{
 int s;
 s=x+y;
 return s;
}
