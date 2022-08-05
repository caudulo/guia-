
#include <stdio.h>
int main()
{
    char palabra[21];
    int i,mayusculas,minusculas;
    char comparacion[24];


    printf("Ingrese una palabra:");
    scanf("%s",&palabra);


    i=0;
    mayusculas=0;
    minusculas=0;

    while(palabra[i]!= '\0')
    {
      if(palabra[i]=='A'|| palabra[i]=='B' || palabra[i]=='C'|| palabra[i]=='D'|| palabra[i]=='E'||palabra[i]=='F'||palabra[i]=='G'||palabra[i]=='H'||palabra[i]=='I'||palabra[i]=='J'||palabra[i]=='K'||palabra[i]=='L'||palabra[i]=='M'||palabra[i]=='N'||palabra[i]=='Ñ'||palabra[i]=='O'||palabra[i]=='P'||palabra[i]=='Q'||palabra[i]=='R'||palabra[i]=='S'||palabra[i]=='T'||palabra[i]=='U'||palabra[i]=='V'||palabra[i]=='W'||palabra[i]=='X'||palabra[i]=='Y'||palabra[i]== 'Z')

    {
       mayusculas++;

    }

    i++;

    }

    i=0;

    while(palabra[i]!= '\0')
    {
      if(palabra[i]=='a'||palabra[i]=='b'||palabra[i]=='c'||palabra[i]=='d'||palabra[i]=='e'||palabra[i]=='f'||palabra[i]=='g'||palabra[i]=='h'||palabra[i]=='i'||palabra[i]=='j'||palabra[i]=='k'||palabra[i]=='l'||palabra[i]=='m'||palabra[i]=='n'||palabra[i]=='ñ'||palabra[i]=='o'||palabra[i]=='p'||palabra[i]=='q'||palabra[i]=='r'||palabra[i]=='s'||palabra[i]=='t'||palabra[i]=='u'||palabra[i]=='v'||palabra[i]=='w'||palabra[i]=='x'||palabra[i]=='y'||palabra[i]== 'z')

    {
       minusculas++;

    }

    i++;

    }

    printf("Cantidad de mayusculas:%d",mayusculas);
    printf("\n");
    printf("Cantidad de minusculas:%d",minusculas);
    return 0;
}
