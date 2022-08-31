#include<stdio.h>
int add(int a, int b)
{
    int sum=a+b;
    return sum;

}

int main()
{
	int a=2, b=3;
	printf("%d",add(a,b));
	return 0;
}
