
#include <stdio.h>
 int main()
 {
     char palabra[21];
     int i,cantidad;

     printf("Ingrese una palabra:  ");
     scanf("%s",&palabra);

    i=0;
    cantidad=0;

   while( palabra[i]!='\0')

   {
       if(palabra[i]=='a')
       {
        cantidad++;
       }
       i++;
   }

    printf("La cantidad de a es de:%d \n",cantidad);
     return 0;
 }
