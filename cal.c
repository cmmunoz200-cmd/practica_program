#include <stdio.h>
int main(){
    int dia, mes , year;
    char tecla; 
    int max_dias;
    printf("introduce el dia: ");
    scanf("%d", &dia);
     dia ++;
    printf("introduce mes: ");
    scanf("%d", &mes);
    printf("introduce el ano: ");
    scanf("%d", &year);
    while (dia >31 || dia < 1 || mes > 12 || mes < 1 || year < 0)
       else {
        max_dias =31; 
        if (dia >max_dias){
            dia = 1; mes++;
        }
            if (tecla == 1 + dia) 
            printf("la fecha es: %d/%d/%d", dia, mes, year);
      }
      printf(" la fecha de hoy es: %d / %d /%d", dia ,mes ,year);
      
    return 0;
}