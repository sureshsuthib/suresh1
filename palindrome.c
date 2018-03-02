#include<stdio.h>
int main()
{
	int e,n,b,sum=0;
	scanf("%d",&n);
	e=n;
	while(e!=0)
	{
		b=e%10;
		sum=sum*10+b;
		e=e/10;
	}
	if(n==sum)
	{
		printf("palindrome");
	}
	else
	{
		printf("not a palindrome");
	}
	return 0;
	
}
