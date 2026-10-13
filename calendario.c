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
   while (dia > 31 || dia < 1 || mes > 12 || mes < 1 || year < 0) {
        if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            max_dias = 30;
        } else if (mes == 2) {
            max_dias = 28; 
        } else {
            max_dias = 31;
        }

        if (dia == max_dias) {
        } 
        else if (dia > max_dias) {
            dia = 1; 
            mes++;
        }
    }
}