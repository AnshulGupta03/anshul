#include<stdio.h>
#include<conio.h>
void main()
{
	int i,arr[10],n,mx;
	clrscr();
	printf("enter the limit");
	sacnf("%d",&n);
	printf("enter the array elements");
	for(i=0;i<n;i++)
	 scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		if(arr[i]>n)
			arr[i]=arr[i]%n;
		arr[arr[i]]=arr[i]+n;
	}
	mx=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>mx)
		{
		   mx=arr[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]==mx)
		printf("%d",i);
	}
	getch();
}