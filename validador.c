#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOTAL_CUENTAS 25

void generarPassword(char *Password) {
    for (int i = 0; i < 6; i++) {
        Password[i] = '0' + (rand() % 10);
    }
    Password[6] = '\0';
}

void generarCorreo(int id, char *correo) {
    char *dominio[] = {"gmail.com", "outlook.com"}; 
    char *nombres[] = {"usuario", "cliente", "test"}; 
    char *nombreAleatorio = nombres[rand() % 3]; 
    char *dominioAleatorio = dominio[rand() % 2];  
    sprintf(correo, "%s_%d@%s", nombreAleatorio, id, dominioAleatorio);
}
int main(void) {
    FILE *archivo = fopen("cuentas_generadas.csv", "w");
    if (archivo == NULL) {
        printf("error al crear el archivo CSV.\n");
        return 1;
    }
    srand((unsigned int)time(NULL));
    fprintf(archivo, "ID, Correo Electronico, Contrasena (6 digitos).\n");
    fclose(archivo);
    return 0;
}