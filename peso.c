#include <stdio.h>
int main(){
 int total_al ,sumalumnos , grup_a=0 , grup_b=0 ,grup_c=0, grup_d=0;
 float peso;
 sumalumnos = grup_a +grup_b+grup_c+grup_d;
 printf("ingresa el peso del alumno:  ");
 scanf("%f", &peso);
 while (peso == -99);
  printf("el peso ingresado es invalido");
  scanf("%f", &peso);
 if (peso <40.0){
    grup_a = grup_a + 1;
 }
 else 
    if (peso >=40.0 && peso < 50.0){
        grup_b = grup_b + 1;
    }
    else 
        if (peso >=50.0 && peso < 60.0){
            grup_c = grup_c + 1;
        }
        else
           grup_d = grup_d + 1;
        sumalumnos = grup_a +grup_b+grup_c+grup_d;
   printf("el numero de alumnos del grupo a es: %d\n", grup_a);
   printf("el numero de alumnos del grupo b es: %d\n", grup_b);
   printf("el numero de alumnos del grupo c es: %d\n", grup_c);     
   printf("el numero de alumnos del grupo d es: %d\n", grup_d);

   printf("el numero total de alumnos es:%d\n", sumalumnos);
    return 0;
}