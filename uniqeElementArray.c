#include<stdio.h>
void uniqueElement(int a[], int n)
{
    int i, j;
    printf("Unique elements are ");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j <i; j++)
        {
            if(a[i] == a[j])
		    break;
	}
	if(i==j)
        printf(" %d\n ", a[i]);
     }
 }
int main()
{
	int a[]={5,6,2,3,2};
	int n=sizeof(a)/sizeof(a[0]);
        uniqueElement(a, n);
	return 0;
}


	
