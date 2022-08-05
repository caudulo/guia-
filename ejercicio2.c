#include <stdio.h>

int main()
{
    char a[20];
    char b;
    int li = 0;
    int ko = 0;
    printf("Ingrese una palabra de maximo 20 letras:\n ");
    scanf("%s", a);
    for(int i = 0; i < 20 && a[i]!='\0'; i++){
        li++;
    }
    ko = (li)/2;
    li--;
    for(int i = 0; i < ko; i++){
        b = a[i];
        a[i] = a[li-i];
        a[li-i] = b;
    }
    printf("\nLetras en total: %d", li+1);
    printf("\nLa palabra en Inversa es: %s", a);
    return 0;
}
