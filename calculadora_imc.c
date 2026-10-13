#include <stdio.h>

int main() {
    int edad;    
    float altura;
    float peso;
    float imc; 

    printf("Introduce tu edad: ");
    scanf("%d", &edad);
    printf("Introduce tu altura (en metros): ");
    scanf("%f", &altura);
    printf("Introduce tu peso (en kg): ");
    scanf("%f", &peso);
    imc = peso / (altura * altura);
    printf("\nTu indice de masa corporal es: %.1f \n", imc);
    if (imc < 18.5) {
        printf("Clasificacion: Tienes bajo peso\n");
    }
    else 
        if (imc < 25.0) { 
        printf("Clasificacion: Estas en buen estado fisico\n");
    }
    else
         if (imc < 30.0) { 
        printf("Clasificacion: Tienes sobrepeso\n");
    }
    else
     if (imc < 40.0) { 
        printf("Clasificacion: Tienes obesidad moderada\n");
    }
    else { 
        printf("Clasificacion: Tienes obesidad morbida\n");
    }

    return 0;
}