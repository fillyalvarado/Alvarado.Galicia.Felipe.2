#include <stdio.h>

int main(void)
{
int a;
int b;
printf("Resta de 8 en 8\n""se realizara un 'desenso' de 8 en 8, apartir del número ingresado\n");
scanf("%d", &b);
for (a=1; a<11; a++)
{
b=b-8;
printf("los numeros son: %d\n" ,b);
}
return 0;
}


