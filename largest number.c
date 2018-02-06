#include <stdio.h>

int main()
{
int t,s,k;
printf(" Enter the values");
scanf("%d%d%d",&t,&s,&k);
 if( t>=s && t>=k )
        printf("%d is the largest number.", t);

    if( s>=t && s>=k )
        printf("%d is the largest number.", s);

    if( k>=t && k>=s )
        printf("%d is the largest number.", k);


	
	return 0;
}
