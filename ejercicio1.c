#include <stdio.h>

int main()
{
char a[20];
int ja = 0;
printf("Ingrese una palabra de maximo 20 letras: ");
scanf("%s", a);
for(int i = 0; i < 20 && a[i]!='\0'; i++){
ja++;
}
printf("\nCantidad de letras: %d", ja);
return 0;
}
