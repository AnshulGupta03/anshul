#include<stdio.h>
#include<conio.h>
void main()
{
	int hh,mm,ss;
	char t[2];
	scanf("%d:%d:%d%s",&hh,&mm,&ss,&t);
	if(t[0]=='a'&&t[1]=='m')
	{
		if(hh==12)
		printf("00:%d:%d%s",mm,ss,t);
		else
		printf("%d:%d:%d%s",hh,mm,ss,t);
	}
	else if(t[0]=='p'&&t[1]=='m')
	{
		if(hh==12)
		printf("%d:%d:%d%s",hh,mm,ss,t);
		else
		printf("%d:%d:%d%s",hh+12,mm,ss,t);
	}
	getch();
}