/*
#include<stdio.h>
*/

void insertion_sort(int a[],int n)
{
int temp,i,j;
for(i=0;i<n-1;i++)
	if(a[i]>a[i+1])
		{
		j=i;
		while(j>-1 && a[j+1]<a[j])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			j--;
			}
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
insertion_sort(a,n);
for(int i=0;i<n;i++)
	printf("%d ",a[i]);
printf("\n");
return 0;
}
*/
