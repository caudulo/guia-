#include <stdio.h>
int main()
{
  char palabra_a[21];
  char palabra_b[21];
  int cant_letras_a=0;
  int cant_letras_b=0;
  int i,flag;

  printf("Ingrese la primer palabra: ");
  scanf("%s",&palabra_a);
  printf("Ingrese la segunda palabra: ");
  scanf("%s",&palabra_b);

i=0;
flag=0;

for(i=0;palabra_a[i]!='\0' || palabra_b[i]!= '\0';i++ )

{
  if(palabra_a[i]!= palabra_b[i])

{
    flag=1;
    break;
}


}

if (flag==1)
{
    printf("son diferentes");
}
else{
    printf("son iguales");
}


    return 0;
}
