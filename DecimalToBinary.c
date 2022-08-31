#include<stdio.h>

void f(int n){
	if(n/2)
	{
           f(n/2);
	}

         printf("%d",n%2);
	}
   int main(){
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
        f(n);
	return 0;
	}



