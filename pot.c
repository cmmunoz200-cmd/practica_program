#include <stdio.h>
    int main(){
        long long int base, exponente , i, potencia ;
        printf("ingresa base: ");
        scanf("%lld", &base);
        printf("ingresa exponente: ");
        scanf("%lld", &exponente);
        i =1;
        potencia = 1;
        while (i <=exponente){
            potencia = potencia * base;
        i= i +1;
            }
            printf("El resultado de la potencia es : %lld\n", potencia);

    return 0;
}