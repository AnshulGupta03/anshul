#include<stdio.h>
#include<conio.h>
void sep(int[],int);
void main()
{
	int a[100],n;
	clrscr();
	printf("enter the limit");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	scanf("%",&a[i]);
	sep(a,n);
	getch();
}
void sep(int a[],int n)
{
	int b[100],i,k,l;
	k=0;
	l=n-1;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
		  b[k]=a[i];
		  k++;
		}
		else
		{
		b[l]=a[i];
		l--;
		}
	}
	for(k=0;k<n;k++)
		printf("%d",b[k]);
}
