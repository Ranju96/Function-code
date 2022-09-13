#include <stdio.h>
int main()
{
        int arr[5] = { 2, 3, 4, 10, 40 };
	int n, low, mid, high,flag=0 ;
	//n = sizeof(arr) / sizeof(arr[0]);

	printf("Enetr the number:");
	scanf("%d",&n);
        
	while (low <= high)
       	{
		 mid = (low + high )/ 2;
		 if (arr[mid] > n)
		{
			high = mid - 1;
		}
		else if(arr[mid]<n)
		{
			low = mid + 1;
		}
		 else if(n==arr[mid])
               {
	       flag=1;
	       break;
	       }
       	}
 		 if(flag==1)
		 {
			 printf("found");
		 }
		else
		{
			printf("not found");
		 }	
        return 0;
}

