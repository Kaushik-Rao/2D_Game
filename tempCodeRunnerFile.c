#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char c;
    char s;
    char sen;
    scanf("%c",c);
    scanf("%s",s);
    scanf("%[^\n]%*c",sen);
    printf("%c\n%s\n",c,&s);
    printf("%s",&sen);   
    return 0;
}
