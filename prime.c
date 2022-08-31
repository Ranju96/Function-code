#include<stdio.h>
int prime(int i, int n);
 
int main ()
{
	int n, i;
	printf("Enter the number:  ");
	scanf("%d",&n);
	 
	if(prime(2, n)==0)
		printf("prime");
	else
		printf("not prime");
}
int prime(int i, int n)
{
if(n==i){
	return 0;
}
else if(n%i==0){

	return 1;
}
else {
	return prime(i+1, n);
}

}
