#include <stdio.h>
void main()
{
    char u;
    printf("Enter the alphabet\n ");
    scanf("%c",&u);
    if(u>='a'&&u<='z'||u>='A'&&u<='Z')
    printf("It is a alphabet");
    else
    printf("It is not a alphabet");
}
