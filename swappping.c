#include<stdio.h>
  int swap(int a, int b)
{
        int temp = a;
        a = b;
        b = temp;
	printf("%d\n%d\n", a, b);
}
int main()
{
        int a=1, b=2;
        swap(a,b);
	//printf("%d\n%d\n",a,b);
	return 0;
        
}          
