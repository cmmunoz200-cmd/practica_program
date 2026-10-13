#include <stdio.h>
#include <string.h>
#include <ctype.h>

void frecuencia(char [],int [], int);
void mostrar_analisis( int [], int);
void inicializar (int [],int);
void a_minuscula(char []);

int main(){
    char nombre[80];
    int frec[26];
    printf("ingresa el nombre del archivo: ");
    fgets(nombre ,80, stdin);
    nombre[strcspn(nombre, "\n")]='\0';
    inicializar(frec,26);
    frecuencia(nombre, frec,26);
    mostrar_analisis(frec,26);
    return 0;
}
void frecuencia(char nombre[], int frec[], int n){
    FILE *ent;
    char linea[255];
    int i;
    inicializar(frec, n);
    ent = fopen(nombre,"r");
    while (fgets(linea, sizeof(linea), ent) !=NULL){
        linea[strcspn(linea,"\n")] ='\0';
        printf("%s\n", linea);
        a_minuscula (linea);
        int i =0;
         while(linea[i] != '\0'){
        frec[linea[i]-97]++;
        }
        i++;
    }
    fclose(ent);
}
void mostrar_analisis(int frec[], int n){
    int i;
    i = 0;
    while (i < 26){
        if (frec[i] !=0){
            printf("%c -%d\n", i+97, frec[i]);
        }
        i++;
    }
}
void inicializar(int frec[], int n){
    int i =0;
    while( i < 26){
        frec[i]=0;
        i++;
    }
}
void a_minuscula(char cadena[]) {
    for (int i = 0; cadena[i] != '\0'; i++) {
        cadena[i] = tolower(cadena[i]);
    }
}