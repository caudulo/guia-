
#include <stdio.h>
#include<string.h>

int main()
{


  int edades[5];
  char nombres[20];
  char joven[20];
  int i,menor;

   i=0;

   for (i=0;i<5;i++)
   {
    printf("Ingrese nombre de la persona n%d: \n",i);
    scanf("%s",&nombres);

     printf("Ingrese edad de la persona n%d: \n",i);
     scanf("%d",&edades[i]);

    menor=edades[0];

if (edades[i]<=menor)
{
  strcpy(joven,nombres);

    menor=edades[i];
}
   }

printf("La edad de la persona mas joven es:%d \n",menor);
printf("La persona mas joven es %s",joven);



return 0;

}
