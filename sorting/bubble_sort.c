/*
#include<stdio.h>
*/

void bubble_sort(int a[],int n)
{
int temp,i,j;
for(i=1;i<n;i++)
	for(j=0;j<n-i;j++)
		if(a[j]>a[j+1])
		{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
		}
}
/*

int main()
{
int a[]={2,1,2,1,2,2,2,3,3,44,221,12,3,1};
int n=14;
for(int i=0;i<n;i++)
	printf("%d ",a[i]);
printf("\n");
bubble_sort(a,n);
for(int i=0;i<n;i++)
	printf("%d ",a[i]);
printf("\n");
return 0;
}

*/
