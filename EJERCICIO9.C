#include <stdio.h>
#include <string.h>

int main (){
    char ui[30] = {0};

    printf("Ingrese una palabra (en mayuscula):");

    scanf("%s", ui);

    for (int i = 0; i < strlen(ui); i++){
        ui[i] = (ui[i] + 3);
        if (ui[i] + 3 > 90){
            ui[i] = ui[i] - 26;

        }


    }
    printf("\nPalabra encriptada: %s", ui);
}
