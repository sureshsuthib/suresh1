#include <stdio.h>
int main(void) 
{  
int v,i,flag=0;  
scanf("%d",&v);
for(i=2;i<v;i++) 
{ 
if(v%i==0) 
flag++; 
}
if(flag==0)
printf("prime suresh");
else printf("no ghgf");
return (0);
}
