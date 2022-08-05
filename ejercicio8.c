#include <stdio.h>
#include <string.h>
int main (){
    int i = 0;
    char g1[30] = {0};
    char h2[30] = {100};
    while(i>=0){
        printf("Ingrese el nombre de la persona (en mayusculass)  numero%d o FIN: ", i);
        scanf("%s", g1);
        if (strcmp(g1,"FIN")==0){
            i = -2;
        }
        else{
            if (strcmp(g1,h2)<0){
                strcpy(h2,g1);
            }
        }
        i++;
    }
    printf("la primer persona es: %s", h2);
}
