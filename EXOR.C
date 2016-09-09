  #include<stdio.h>
  #include<conio.h>
  void main()
  {
	int t,i,arr[100],n;
	printf("enter the limit");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	t=arr[0]^arr[1];
	for(i=2;i<n;i++)
	{
		t=t^arr[i];
	}
	printf("%d",t);
	getch();
  }