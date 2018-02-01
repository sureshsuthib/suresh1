#include <stdio.h>
void main()
{
    char cl;
    printf("entre the character=");
    scanf("%c",&cl);
   if(cl=='A'||cl=='E'||cl=='I'||cl=='O'||cl=='U'||cl=='a'||cl=='e'||cl=='i'||cl=='o'||cl=='u')
    {
        printf("it is vowel");
    }
    else
    {
        printf("it is consonant");
    }
    
}
