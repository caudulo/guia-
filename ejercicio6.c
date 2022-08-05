#include <stdio.h>

int main()
{
    char a[20]={0};
    int po[27]={0};
    int no=0;
    int si=0;
    printf("Ingrese una palabra en mayúsculas: ");
    scanf("%s", a);
    for (int i = 0; i<20; i++){
    po[(a[i]-65)]++;
    }
    for (int i = 0; i<26; i++){
    printf("\n%d", po[i]);
    if (po[i] > no){
    no = po[i];
    si = i+65;
        }
    }


    printf("Letra que mas se repitio es: %c", si);




    return 0;
}

