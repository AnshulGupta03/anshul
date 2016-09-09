#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,flag=0,b[100];
	clrscr();
	printf("enter the limit");
	scanf("%d",&n);
	printf("enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	b[i]=0;
	for(i=0;i<n;i++)
	b[a[i]]++;
	for(i=0;i<n;i++)
	{
		if(b[i]>1)
		{
		flag=1;
		break;
		}
	}
	if(flag==1)
	printf("YES");
	else
	printf("NO");
	getch();
}