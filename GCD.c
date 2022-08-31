#include<stdio.h>
  int hcf(int a, int b);

  int main()
{
	int a,b;
	printf("Enter the number: ");
	scanf("%d%d", &a, &b);
	printf("GCD of %d and %d is %d", a, b, hcf(a,b));

	return 0;

}
 int hcf(a,b)
{
	if(b!=0)
		return hcf(b, a%b);
	     
	     else
		     return a;
}
