#include <stdio.h>
#include <ctype.h>
int main(int argc, char **argv)
{
char c;
printf("ingrese lo que se le ocurra\n""");
while(c != EOF){
c = fgetc(stdin);
if(isalnum(c))
printf("%c", c);
else
c = fgetc(stdin);
}
return 1;
}
