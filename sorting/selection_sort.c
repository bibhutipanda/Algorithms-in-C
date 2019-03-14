
#include<stdio.h>


void selection_sort(int a[],int n)
{
int min_index=0,min=a[0],temp;
for(int i=1;i<n;i++)
	{
	for(int j=i;j<n;j++)
		if(a[min_index]>a[j])
			{
			min=a[j];
			min_index=j;
			}
		
	if(min<a[i])
		{
		temp=a[min_index];
		a[min_index]=a[i];
		a[i]=temp;
		}
	}
}


int main()
{
int a[]={2,1,2,1,2,2,2,3,3,44,221,12,3,1};
int n=14;
for(int i=0;i<n;i++)
	printf("%d ",a[i]);
printf("\n");
selection_sort(a,n);
for(int i=0;i<n;i++)
	printf("%d ",a[i]);
printf("\n");
return 0;
}

