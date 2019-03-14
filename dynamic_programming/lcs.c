#include<stdio.h>
int c[1000][1000];
char b[1000][1000];


void print_lcs(int i,int j,char X[])
{
	if(i==0 || j==0)
		return;
	if(b[i][j]=='\\')
	{
		print_lcs(i-1,j-1,X);
		printf("%c",X[i-1]);
	}
	else if(b[i][j]=='^')
		print_lcs(i-1,j,X);
	else
		print_lcs(i,j-1,X);
}


void length_lcs(char X[],int m,char Y[],int n)
{
int i,j;
	for(i=0;i<=m;i++)
		c[i][0]=0;
	for(i=0;i<=n;i++)
		c[0][i]=0;
	
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(X[i-1]==Y[j-1])
			{
				c[i][j]=c[i-1][j-1]+1;
				b[i][j]='\\';
			}
			else
			{
				if(c[i-1][j]>=c[i][j-1])
				{
					c[i][j]=c[i-1][j];
					b[i][j]='^';
				}
				else
				{
					c[i][j]=c[i][j-1];
					b[i][j]='<';
				}
			}
		}
	}


	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			printf("%d ",c[i][j]);
		}
	printf("\n");
	}

	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			printf("%c ",b[i][j]);
		}
	printf("\n");
	}

printf("Longest common sequence(s) are:\n");
int k=c[m][n],iterator=n;
	while(c[m][iterator]==k)
	{
		print_lcs(m,iterator--,X);
		printf("\n");
	}
}

int main()
{
int size_1,size_2;
printf("Enter size of first string: ");
scanf("%d",&size_1);
char X[size_1];
printf("Enter first string: ");
scanf("%s",X);

printf("Enter size of second string: ");
scanf("%d",&size_2);
char Y[size_2];
printf("Enter second string: ");
scanf("%s",Y);

printf("\nOutput:\n");
length_lcs(X,size_1,Y,size_2);
return 0;
}
