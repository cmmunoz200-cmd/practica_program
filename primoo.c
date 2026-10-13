#include <stdio.h>
// trabajo bryan aravenas, cristian figueroa 

int main() {  // declaracion de las variables del programa
    int limite_superior;
    int opcion_finalizar = 0; 

    while (opcion_finalizar == 0) { // esta parte es para iniciar el bucle que controla todo el programa
        printf("Ingrese el limite superior a considerar: ");
        scanf("%d", &limite_superior);
        int cant_primos = 0; // las variables que apareceran en el resultado final 
        int cant_gemelos = 0;
        int i = 2; 
  while (i <= limite_superior) { //aqui se inicia el buscador del numero 
            int divisores_i = 0;// aqui se asegura de que el numero sea divisible entre 1 y el mismo numero
            int j = 1;
            while (j <= i) {
                if (i % j == 0) {
                    divisores_i++;// aqui le cambie no me funciono el i + 1;
                }
                j++;
            }
            if (divisores_i == 2) {
                cant_primos++;
                if ((i + 2) <= limite_superior) { // aqui comienza a buscar los numeros gemelos 
                    int divisores_gemelos = 0;
                    int k = 1;
                    while (k <= (i + 2)) {
                        if ((i + 2) % k == 0) {
                            divisores_gemelos++;
                        }
                        k++;
                    }
                    if (divisores_gemelos == 2) {
                        cant_gemelos++;
                    }
                }
            }
            i++; 
        }
        printf("\nExisten %d numeros primos y %d pares de gemelos primos.\n", cant_primos, cant_gemelos); // como ya sabes aqui va el resultado
        printf("0 = continuar / 1 = finalizar: ");
        scanf("%d", &opcion_finalizar);
        printf("\n");
    }
    printf(">>Finalizando<<.\n");

    return 0;
}
// no se si el orden este bien pero ya lo compile y me funciona bien jaja 