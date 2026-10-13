#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void procesar_archivo(const char *nombre_entrada, const char *nombre_salida, char clave) {
    FILE *archivo_entrada = fopen(nombre_entrada, "rb");
    FILE *archivo_salida = fopen(nombre_salida, "wb");

    if (archivo_entrada == NULL) {
        printf("\n[!] Error: No se pudo encontrar o abrir el archivo '%s'.\n", nombre_entrada);
        return;
    }

    if (archivo_salida == NULL) {
        printf("\n[!] Error: No se pudo crear el archivo de salida.\n");
        fclose(archivo_entrada);
        return;
    }

    int byte;
    while ((byte = fgetc(archivo_entrada)) != EOF) {
        fputc(byte ^ clave, archivo_salida);
    }

    fclose(archivo_entrada);
    fclose(archivo_salida);
    
    printf("\n[+] ¡ Exito ! Archivo guardado como: '%s'\n", nombre_salida);
}

int main() {
    char nombre_entrada[256];
    char nombre_salida[256];
    char clave = 'K'; 
    int opcion;

    printf("========================================\n");
    printf("     CIFRADOR / DESCIFRADOR DE ARCHIVOS \n");
    printf("========================================\n");
    printf("1. Cifrar archivo\n");
    printf("2. Descifrar archivo\n");
    printf("Selecciona una opcion (1 o 2): ");
    
    if (scanf("%d", &opcion) != 1) {
        printf("Opcion no valida.\n");
        return 1;
    }
    while (getchar() != '\n');

     if (opcion == 1) {
        printf("\n--- MODO CIFRADO ---\n");
        printf("Ingresa el nombre del archivo a cifrar (ej: secreto.txt): ");
        if (fgets(nombre_entrada, sizeof(nombre_entrada), stdin) != NULL) {
            nombre_entrada[strcspn(nombre_entrada, "\n")] = 0;
        }
        strcpy(nombre_salida, "archivo_cifrado.bin");
        procesar_archivo(nombre_entrada, nombre_salida, clave);

    } else if (opcion == 2) {
        printf("\n--- MODO DESCIFRADO ---\n");
        printf("Ingresa el nombre del archivo cifrado (ej: archivo_cifrado.bin): ");
        if (fgets(nombre_entrada, sizeof(nombre_entrada), stdin) != NULL) {
            nombre_entrada[strcspn(nombre_entrada, "\n")] = 0;
        }
        strcpy(nombre_salida, "texto_recuperado.txt");
        procesar_archivo(nombre_entrada, nombre_salida, clave);

    } else {
        printf("\n[!] Opción desconocida.\n");
    }

    return 0;
}